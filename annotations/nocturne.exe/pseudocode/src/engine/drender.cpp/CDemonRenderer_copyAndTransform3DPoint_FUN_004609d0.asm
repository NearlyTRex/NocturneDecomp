; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0(undefined4 param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   FUN_00469ce0 at 0046a272
;   FUN_00513720 at 005137f0
;
; Called Functions:
;   engine_3d.c_processCameraRelativePoint_FUN_004044d0
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 004609d0
        ;   Label: engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0
    MOV EDX,dword ptr [ESP + 0x18]      ; 004609d3
    MOV EAX,dword ptr [EDX]             ; 004609d7
    MOV dword ptr [ESP + 0x4],EAX       ; 004609d9
    MOV EAX,dword ptr [EDX + 0x4]       ; 004609dd
    MOV dword ptr [ESP + 0x8],EAX       ; 004609e0
    MOV EAX,dword ptr [EDX + 0x8]       ; 004609e4
    MOV dword ptr [ESP + 0xc],EAX       ; 004609e7
    MOV EAX,ESP                         ; 004609eb
    PUSH EAX                            ; 004609ed
    CALL engine_3d.c_processCameraRelativePoint_FUN_004044d0 ; 004609ee
        ;   XREF to: 004044d0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_processCameraRelativePoint_FUN_004044d0()
    ADD ESP,0x4                         ; 004609f3
    ADD ESP,0x10                        ; 004609f6
    RET                                 ; 004609f9

