; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_004864c0(CDraculaBride *this_ptr,char *sound_name,float volume)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
; float            Stack[0xc]:4   volume
; Local Variables:
; char[200]        Stack[-0x174]:200  local_174
; float[8]         Stack[-0xac]:32  local_ac
; CVector3f        Stack[-0x8c]:12  local_8c
; float            Stack[-0x80]:4  local_80
; float            Stack[-0x7c]:4  local_7c
; float            Stack[-0x78]:4  local_78
; float            Stack[-0x74]:4  local_74
; float            Stack[-0x70]:4  local_70
; float            Stack[-0x6c]:4  local_6c
; float            Stack[-0x68]:4  local_68
; float            Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; CVector3f        Stack[-0x50]:12  local_50
; CVector3f        Stack[-0x44]:12  local_44
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; CVector3f        Stack[-0x20]:12  local_20
; float            Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_dracbrid.cpp_CDraculaBride_processDamage_FUN_00486070 at 004861f6
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00484410 at 00484967
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004864c0
        ;   Label: core_dracbrid.cpp_CDraculaBride_startFreakySound_FUN_004864c0
    PUSH ESI                            ; 004864c1
    PUSH EDI                            ; 004864c2
    PUSH EBP                            ; 004864c3
    SUB ESP,0x164                       ; 004864c4
    MOV EBP,dword ptr [ESP + 0x178]     ; 004864ca
    PUSH 0x40e00000                     ; 004864d1
    PUSH 0x3f800000                     ; 004864d6
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004864db
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

