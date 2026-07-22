; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(int param_1,undefined4 param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[76]:
;   FUN_0041ef90 at 0041efab
;   FUN_0041f190 at 0041f1b1
;   FUN_00439f50 at 0043a050
;   FUN_0043d1c0 at 0043d6fc
;   FUN_00477890 at 00477e91
;   FUN_00478790 at 00478c21
;   FUN_0048b6f0 at 0048b8e6
;   FUN_00495a20 at 004962ca
;   FUN_00498de0 at 00498e6f
;   FUN_004a9270 at 004a98dc
;   ... and 66 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a290
        ;   Label: core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
    SUB ESP,0xc                         ; 0040a291
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040a294
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040a298
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0040a29c
    LEA EAX,[ECX + 0x20]                ; 0040a2a0
    FLD float ptr [EDX]                 ; 0040a2a3
    FSUB float ptr [EAX]                ; 0040a2a5
    FSTP float ptr [ESP]                ; 0040a2a7
    FLD float ptr [EDX + 0x4]           ; 0040a2aa
    FSUB float ptr [EAX + 0x4]          ; 0040a2ad
    FSTP float ptr [ESP + 0x4]          ; 0040a2b0
    FLD float ptr [EDX + 0x8]           ; 0040a2b4
    FSUB float ptr [EAX + 0x8]          ; 0040a2b7
    MOV EAX,ESP                         ; 0040a2ba
    PUSH EAX                            ; 0040a2bc
    PUSH EBX                            ; 0040a2bd
    LEA EAX,[ECX + 0x3c]                ; 0040a2be
    PUSH EAX                            ; 0040a2c1
    FSTP float ptr [ESP + 0x14]         ; 0040a2c2
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 0040a2c6
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    ADD ESP,0xc                         ; 0040a2cb
    MOV EAX,EBX                         ; 0040a2ce
    ADD ESP,0xc                         ; 0040a2d0
    POP EBX                             ; 0040a2d3
    RET                                 ; 0040a2d4

