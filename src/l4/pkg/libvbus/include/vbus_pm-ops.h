/*
 * (c) 2013 Alexander Warg <warg@os.inf.tu-dresden.de>
 *     economic rights: Technische Universität Dresden (Germany)
 *
 * This file is part of TUD:OS and distributed under the terms of the
 * GNU General Public License 2.
 * Please see the COPYING-GPL-2 file for details.
 */

#pragma once

enum L4vbus_pm_op
{
  L4VBUS_PM_OP_SUSPEND = 0x81000000,
  L4VBUS_PM_OP_RESUME,
};

