// Name: shape_meshlod.cpp_CLodMesh_computeMeshCRC32_FUN_0051c6f0
// Address: 0051c6f0
// Address Range: [[0051c6f0, 0051cded]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_computeMeshCRC32_FUN_0051c6f0(CLodMesh *this_ptr,uint *out_crc)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_computeMeshCRC32_FUN_0051c6f0(CLodMesh *this_ptr,uint *out_crc)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar1;
  int iVar3;
  byte *pbVar4;
  int iVar6;
  int iVar5;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  char *local_24;
  int local_20;
  CLodMesh *local_1c;
  int local_18;
  int local_14;
  
  local_34 = 0;
  if (0 < this_ptr->tri_count) {
    local_38 = 0;
    do {
      local_28 = (int)this_ptr->tri_data->attribute_indices + local_38;
      iVar5 = 0;
      if (0 < this_ptr->active_attribute_count) {
        local_1c = this_ptr;
        do {
          if (local_1c->attribute_enabled_flags[0] != 0) {
            iVar3 = 4;
            local_4c = *(uint *)(iVar5 * 4 + local_28);
            pbVar4 = (byte *)&local_4c;
            do {
              while( true ) {
                uVar1 = *out_crc ^ (uint)*pbVar4 << 0x18;
                *out_crc = uVar1;
                if ((*out_crc & 0x80000000) == 0) {
                  uVar1 = uVar1 * 2;
                }
                else {
                  uVar1 = uVar1 * 2 ^ 0x4c11db7;
                }
                *out_crc = uVar1;
                if ((*out_crc & 0x80000000) == 0) {
                  uVar1 = *out_crc * 2;
                }
                else {
                  uVar1 = *out_crc * 2 ^ 0x4c11db7;
                }
                *out_crc = uVar1;
                if ((*out_crc & 0x80000000) == 0) {
                  uVar1 = *out_crc * 2;
                }
                else {
                  uVar1 = *out_crc * 2 ^ 0x4c11db7;
                }
                *out_crc = uVar1;
                if ((*out_crc & 0x80000000) == 0) {
                  uVar1 = *out_crc * 2;
                }
                else {
                  uVar1 = *out_crc * 2 ^ 0x4c11db7;
                }
                *out_crc = uVar1;
                if ((*out_crc & 0x80000000) == 0) {
                  uVar1 = *out_crc * 2;
                }
                else {
                  uVar1 = *out_crc * 2 ^ 0x4c11db7;
                }
                *out_crc = uVar1;
                if ((*out_crc & 0x80000000) == 0) {
                  uVar1 = *out_crc * 2;
                }
                else {
                  uVar1 = *out_crc * 2 ^ 0x4c11db7;
                }
                *out_crc = uVar1;
                if ((*out_crc & 0x80000000) == 0) {
                  uVar1 = *out_crc * 2;
                }
                else {
                  uVar1 = *out_crc * 2 ^ 0x4c11db7;
                }
                *out_crc = uVar1;
                if ((*out_crc & 0x80000000) != 0) break;
                pbVar4 = pbVar4 + 1;
                iVar3 = iVar3 + -1;
                *out_crc = *out_crc * 2;
                if (iVar3 < 1) goto LAB_0051c748;
              }
              pbVar4 = pbVar4 + 1;
              iVar3 = iVar3 + -1;
              *out_crc = *out_crc * 2 ^ 0x4c11db7;
            } while (0 < iVar3);
          }
LAB_0051c748:
          iVar5 = iVar5 + 1;
          local_1c = (CLodMesh *)&local_1c->vertex_data;
        } while (iVar5 < this_ptr->active_attribute_count);
      }
      local_20 = local_28;
      local_18 = local_28;
      local_2c = local_28 + 0xc;
      do {
        iVar3 = 4;
        pbVar1 = (byte *)&local_48;
        local_48 = *(uint *)(local_18 + 0x10);
        do {
          *out_crc = *out_crc ^ (uint)*pbVar1 << 0x18;
          uVar1 = *out_crc;
          if ((uVar1 & 0x80000000) == 0) {
            uVar4 = uVar1 * 2;
          }
          else {
            uVar4 = uVar1 * 2 ^ 0x4c11db7;
          }
          *out_crc = uVar4;
          if ((uVar4 & 0x80000000) == 0) {
            uVar1 = uVar4 * 2;
          }
          else {
            uVar1 = uVar4 * 2 ^ 0x4c11db7;
          }
          *out_crc = uVar1;
          if ((uVar1 & 0x80000000) == 0) {
            uVar1 = uVar1 * 2;
          }
          else {
            uVar1 = uVar1 * 2 ^ 0x4c11db7;
          }
          *out_crc = uVar1;
          if ((uVar1 & 0x80000000) == 0) {
            uVar1 = uVar1 * 2;
          }
          else {
            uVar1 = uVar1 * 2 ^ 0x4c11db7;
          }
          *out_crc = uVar1;
          if ((uVar1 & 0x80000000) == 0) {
            uVar1 = uVar1 * 2;
          }
          else {
            uVar1 = uVar1 * 2 ^ 0x4c11db7;
          }
          *out_crc = uVar1;
          if ((uVar1 & 0x80000000) == 0) {
            uVar1 = uVar1 * 2;
          }
          else {
            uVar1 = uVar1 * 2 ^ 0x4c11db7;
          }
          *out_crc = uVar1;
          if ((uVar1 & 0x80000000) == 0) {
            uVar1 = uVar1 * 2;
          }
          else {
            uVar1 = uVar1 * 2 ^ 0x4c11db7;
          }
          *out_crc = uVar1;
          if ((uVar1 & 0x80000000) == 0) {
            uVar1 = uVar1 * 2;
          }
          else {
            uVar1 = uVar1 * 2 ^ 0x4c11db7;
          }
          pbVar1 = pbVar1 + 1;
          iVar3 = iVar3 + -1;
          *out_crc = uVar1;
        } while (0 < iVar3);
        iVar3 = 0;
        if (0 < this_ptr->sort_attribute_count) {
          local_14 = local_20;
          do {
            iVar2 = 4;
            pbVar4 = (byte *)&local_44;
            local_44 = *(uint *)(local_14 + 0x1c);
            do {
              uVar1 = *out_crc ^ (uint)*pbVar4 << 0x18;
              *out_crc = uVar1;
              if ((*out_crc & 0x80000000) == 0) {
                uVar1 = uVar1 * 2;
              }
              else {
                uVar1 = uVar1 * 2 ^ 0x4c11db7;
              }
              *out_crc = uVar1;
              if ((*out_crc & 0x80000000) == 0) {
                uVar1 = *out_crc * 2;
              }
              else {
                uVar1 = *out_crc * 2 ^ 0x4c11db7;
              }
              *out_crc = uVar1;
              if ((*out_crc & 0x80000000) == 0) {
                uVar1 = *out_crc * 2;
              }
              else {
                uVar1 = *out_crc * 2 ^ 0x4c11db7;
              }
              *out_crc = uVar1;
              if ((*out_crc & 0x80000000) == 0) {
                uVar1 = *out_crc * 2;
              }
              else {
                uVar1 = *out_crc * 2 ^ 0x4c11db7;
              }
              *out_crc = uVar1;
              if ((*out_crc & 0x80000000) == 0) {
                uVar1 = *out_crc * 2;
              }
              else {
                uVar1 = *out_crc * 2 ^ 0x4c11db7;
              }
              *out_crc = uVar1;
              if ((*out_crc & 0x80000000) == 0) {
                uVar1 = *out_crc * 2;
              }
              else {
                uVar1 = *out_crc * 2 ^ 0x4c11db7;
              }
              *out_crc = uVar1;
              if ((*out_crc & 0x80000000) == 0) {
                uVar1 = *out_crc * 2;
              }
              else {
                uVar1 = *out_crc * 2 ^ 0x4c11db7;
              }
              *out_crc = uVar1;
              if ((*out_crc & 0x80000000) == 0) {
                uVar1 = *out_crc * 2;
              }
              else {
                uVar1 = *out_crc * 2 ^ 0x4c11db7;
              }
              pbVar4 = pbVar4 + 1;
              iVar2 = iVar2 + -1;
              *out_crc = uVar1;
            } while (0 < iVar2);
            iVar3 = iVar3 + 1;
            local_14 = local_14 + 4;
          } while (iVar3 < this_ptr->sort_attribute_count);
        }
        local_18 = local_18 + 4;
        local_20 = local_20 + 8;
      } while (local_18 != local_28 + 0xc);
      local_34 = local_34 + 1;
      local_38 = local_38 + 0x8c;
    } while (local_34 < this_ptr->tri_count);
  }
  local_30 = 0;
  if (0 < this_ptr->vertex_count) {
    local_3c = 0;
    do {
      local_24 = this_ptr->vertex_data->lod_workspace + local_3c + -0x10;
      iVar3 = 0xc;
      pcVar3 = local_24;
      do {
        uVar1 = *out_crc ^ (uint)(byte)*pcVar3 << 0x18;
        *out_crc = uVar1;
        if ((*out_crc & 0x80000000) == 0) {
          uVar1 = uVar1 * 2;
        }
        else {
          uVar1 = uVar1 * 2 ^ 0x4c11db7;
        }
        *out_crc = uVar1;
        if ((*out_crc & 0x80000000) == 0) {
          uVar1 = *out_crc * 2;
        }
        else {
          uVar1 = *out_crc * 2 ^ 0x4c11db7;
        }
        *out_crc = uVar1;
        if ((*out_crc & 0x80000000) == 0) {
          uVar1 = *out_crc * 2;
        }
        else {
          uVar1 = *out_crc * 2 ^ 0x4c11db7;
        }
        *out_crc = uVar1;
        if ((*out_crc & 0x80000000) == 0) {
          uVar1 = *out_crc * 2;
        }
        else {
          uVar1 = *out_crc * 2 ^ 0x4c11db7;
        }
        *out_crc = uVar1;
        if ((*out_crc & 0x80000000) == 0) {
          uVar1 = *out_crc * 2;
        }
        else {
          uVar1 = *out_crc * 2 ^ 0x4c11db7;
        }
        *out_crc = uVar1;
        if ((*out_crc & 0x80000000) == 0) {
          uVar1 = *out_crc * 2;
        }
        else {
          uVar1 = *out_crc * 2 ^ 0x4c11db7;
        }
        *out_crc = uVar1;
        if ((*out_crc & 0x80000000) == 0) {
          uVar1 = *out_crc * 2;
        }
        else {
          uVar1 = *out_crc * 2 ^ 0x4c11db7;
        }
        *out_crc = uVar1;
        if ((*out_crc & 0x80000000) == 0) {
          uVar1 = *out_crc * 2;
        }
        else {
          uVar1 = *out_crc * 2 ^ 0x4c11db7;
        }
        pcVar3 = pcVar3 + 1;
        iVar3 = iVar3 + -1;
        *out_crc = uVar1;
      } while (0 < iVar3);
      iVar3 = 0;
      if (0 < this_ptr->extra_attribute_count) {
        do {
          iVar6 = 4;
          pbVar4 = (byte *)&local_40;
          local_40 = *(uint *)(local_24 + 0xc);
          do {
            uVar1 = *out_crc ^ (uint)*pbVar4 << 0x18;
            *out_crc = uVar1;
            if ((*out_crc & 0x80000000) == 0) {
              uVar1 = uVar1 * 2;
            }
            else {
              uVar1 = uVar1 * 2 ^ 0x4c11db7;
            }
            *out_crc = uVar1;
            if ((*out_crc & 0x80000000) == 0) {
              uVar1 = *out_crc * 2;
            }
            else {
              uVar1 = *out_crc * 2 ^ 0x4c11db7;
            }
            *out_crc = uVar1;
            if ((*out_crc & 0x80000000) == 0) {
              uVar1 = *out_crc * 2;
            }
            else {
              uVar1 = *out_crc * 2 ^ 0x4c11db7;
            }
            *out_crc = uVar1;
            if ((*out_crc & 0x80000000) == 0) {
              uVar1 = *out_crc * 2;
            }
            else {
              uVar1 = *out_crc * 2 ^ 0x4c11db7;
            }
            *out_crc = uVar1;
            if ((*out_crc & 0x80000000) == 0) {
              uVar1 = *out_crc * 2;
            }
            else {
              uVar1 = *out_crc * 2 ^ 0x4c11db7;
            }
            *out_crc = uVar1;
            if ((*out_crc & 0x80000000) == 0) {
              uVar1 = *out_crc * 2;
            }
            else {
              uVar1 = *out_crc * 2 ^ 0x4c11db7;
            }
            *out_crc = uVar1;
            if ((*out_crc & 0x80000000) == 0) {
              uVar1 = *out_crc * 2;
            }
            else {
              uVar1 = *out_crc * 2 ^ 0x4c11db7;
            }
            *out_crc = uVar1;
            if ((*out_crc & 0x80000000) == 0) {
              uVar1 = *out_crc * 2;
            }
            else {
              uVar1 = *out_crc * 2 ^ 0x4c11db7;
            }
            pbVar4 = pbVar4 + 1;
            iVar6 = iVar6 + -1;
            *out_crc = uVar1;
          } while (0 < iVar6);
          iVar3 = iVar3 + 1;
          local_24 = local_24 + 4;
        } while (iVar3 < this_ptr->extra_attribute_count);
      }
      local_30 = local_30 + 1;
      local_3c = local_3c + 0x4c4;
    } while (local_30 < this_ptr->vertex_count);
  }
  return;
}
