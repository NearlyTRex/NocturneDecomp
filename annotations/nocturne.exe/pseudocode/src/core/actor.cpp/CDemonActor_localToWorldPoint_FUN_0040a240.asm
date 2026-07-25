; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * __cdecl core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(int param_1,float *param_2,undefined4 param_3)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; XREF[144]:
;   FUN_00414930 at 00414993
;   FUN_004181f0 at 0041828b
;   FUN_00418a00 at 004190fc
;   FUN_004196b0 at 004198e5
;   FUN_0041f190 at 0041f214
;   FUN_0041f3d0 at 0041f515
;   FUN_0041fe40 at 0042000b
;   FUN_0043d1c0 at 0043d1f4
;   FUN_0045ab40 at 0045abda
;   FUN_004777a0 at 004777fa
;   ... and 134 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a240
        ;   Label: core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
    SUB ESP,0xc                         ; 0040a241
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040a244
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0040a248
    PUSH EDX                            ; 0040a24c
    LEA EAX,[ESP + 0x4]                 ; 0040a24d
    PUSH EAX                            ; 0040a251
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040a252
    ADD EAX,0x3c                        ; 0040a256
    PUSH EAX                            ; 0040a259
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0040a25a
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    ADD ESP,0xc                         ; 0040a25f
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040a262
    FLD float ptr [EAX]                 ; 0040a266
    FADD float ptr [EDX + 0x20]         ; 0040a268
    FSTP float ptr [EBX]                ; 0040a26b
    FLD float ptr [EAX + 0x4]           ; 0040a26d
    FADD float ptr [EDX + 0x24]         ; 0040a270
    FSTP float ptr [EBX + 0x4]          ; 0040a273
    FLD float ptr [EAX + 0x8]           ; 0040a276
    FADD float ptr [EDX + 0x28]         ; 0040a279
    MOV EAX,EBX                         ; 0040a27c
    FSTP float ptr [EBX + 0x8]          ; 0040a27e
    ADD ESP,0xc                         ; 0040a281
    POP EBX                             ; 0040a284
    RET                                 ; 0040a285

