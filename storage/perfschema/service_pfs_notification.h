/* Copyright (c) 2017, Oracle and/or its affiliates. All rights reserved.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; version 2 of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02111-1307  USA */

#ifndef SERVICE_PFS_NOTIFICATION_H
#define SERVICE_PFS_NOTIFICATION_H

struct PSI_notification_v1;

int pfs_register_notification(const struct PSI_notification_v1 *callbacks,
                              bool with_ref_count);
int pfs_unregister_notification(int handle);
void pfs_notify_thread_create(PSI_thread *thread);
void pfs_notify_thread_destroy(PSI_thread *thread);
void pfs_notify_session_connect(PSI_thread *thread);
void pfs_notify_session_disconnect(PSI_thread *thread);
void pfs_notify_session_change_user(PSI_thread *thread);

#endif