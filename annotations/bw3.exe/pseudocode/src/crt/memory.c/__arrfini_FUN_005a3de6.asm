; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c___arrfini_FUN_005a3de6(void *obj_array,int obj_count,WatcomTypeInfo *type_info)
;
; Parameters:
; void *           Stack[0x4]:4   obj_array
; int              Stack[0x8]:4   obj_count
; WatcomTypeInfo * Stack[0xc]:4   type_info
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[39]:
;   core_armour.cpp_FUN_00410370 at 0041037c
;   core_bmppuzzl.cpp_FUN_004144a0 at 004144ac
;   core_bmppuzzl.cpp_FUN_004144c0 at 004144cc
;   core_bodypart.cpp_FUN_00416dc0 at 00416dcc
;   core_boxactor.cpp_CDemonFilter_arrdtor8_FUN_00420e20 at 00420e2c
;   core_burncrss.cpp_FUN_00425490 at 0042549c
;   core_dcube.cpp_CVector3f_arrdtor16_FUN_004de7b0 at 004de7bc
;   core_dfilter.cpp_CDemonFilter_arrdtor4_FUN_00459f30 at 00459f3c
;   core_dmodel.cpp_CKeyFramedModel_arrdtor256_FUN_00462630 at 0046263f
;   core_fire.cpp_CFireball_arrdtor64_FUN_004a49d0 at 004a49dc
;   ... and 29 more
;
; Called Functions:
;   crt_unknown.c_FUN_005a3dac
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 005a3de6
        ;   Label: crt_memory.c___arrfini_FUN_005a3de6
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a3de9
    MOV dword ptr [ESP],EAX             ; 005a3ded
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a3df0
    MOV dword ptr [ESP + 0x4],EAX       ; 005a3df4
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a3df8
    MOV dword ptr [ESP + 0x8],EAX       ; 005a3dfc
    MOV EAX,ESP                         ; 005a3e00
    PUSH EAX                            ; 005a3e02
    CALL crt_unknown.c_FUN_005a3dac     ; 005a3e03
        ;   XREF to: 005a3dac (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3dac()
    ADD ESP,0x4                         ; 005a3e08
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a3e0b
    ADD ESP,0xc                         ; 005a3e0f
    RET                                 ; 005a3e12

