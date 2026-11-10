; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_sentinel_cpp_CSentinel_attractActorToward_FUN_0052b6d0(CSentinel *this_ptr,CDemonActor *actor,CVector3f *target_local_point)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; CVector3f *      Stack[0xc]:4   target_local_point
;
; Referenced Globals:
;   undefined4 DAT_005e53fd
;   undefined4 DAT_005e5401
;   undefined4 DAT_005e5405
;   undefined4 DAT_01e66150
;   undefined4 DAT_01e66154
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_xform.cpp_FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0052b6d0
        ;   Label: core_sentinel.cpp_CSentinel_attractActorToward_FUN_0052b6d0
    SUB ESP,0x78                        ; 0052b6d1
    MOV EBP,dword ptr [ESP + 0x84]      ; 0052b6d4
    TEST EBP,EBP                        ; 0052b6db
    JNZ 0x0052b6e6                      ; 0052b6dd
        ;   XREF to: 0052b6e6 (CONDITIONAL_JUMP)  ; LAB_0052b6e6
    XOR EAX,EAX                         ; 0052b6df
    ADD ESP,0x78                        ; 0052b6e1
    POP EBP                             ; 0052b6e4
    RET                                 ; 0052b6e5
    PUSH EDI                            ; 0052b6e6
        ;   Label: LAB_0052b6e6
    PUSH ESI                            ; 0052b6e7
    PUSH EBX                            ; 0052b6e8
    MOV ESI,dword ptr [0x01e66150]      ; 0052b6e9 | DAT_01e66150
    LEA EAX,[ESI*0x4 + 0x0]             ; 0052b6ef
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0052b6f6
    SUB EAX,ESI                         ; 0052b6fd
    ADD EBX,0x1134                      ; 0052b6ff
    SHL EAX,0x4                         ; 0052b705
    ADD EAX,EBX                         ; 0052b708
    PUSH EAX                            ; 0052b70a
    PUSH 0x265370c                      ; 0052b70b | DAT_0265370c
    LEA ESI,[ESP + 0x74]                ; 0052b710
    LEA EDI,[ESP + 0x5c]                ; 0052b714
    CALL core_xform.cpp_FUN_00591530    ; 0052b718
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[ESP + 0x74]                ; 0052b71d
    ADD ESP,0x8                         ; 0052b721
    MOVSD ES:EDI,ESI                    ; 0052b724
    MOVSD ES:EDI,ESI                    ; 0052b725
    MOVSD ES:EDI,ESI                    ; 0052b726
    MOV ESI,dword ptr [0x01e66154]      ; 0052b727 | DAT_01e66154
    LEA EAX,[ESI*0x4 + 0x0]             ; 0052b72d
    SUB EAX,ESI                         ; 0052b734
    SHL EAX,0x4                         ; 0052b736
    ADD EAX,EBX                         ; 0052b739
    PUSH EAX                            ; 0052b73b
    PUSH 0x265370c                      ; 0052b73c | DAT_0265370c
    LEA ESI,[ESP + 0x68]                ; 0052b741
    LEA EDI,[ESP + 0x80]                ; 0052b745
    CALL core_xform.cpp_FUN_00591530    ; 0052b74c
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[ESP + 0x68]                ; 0052b751
    ADD ESP,0x8                         ; 0052b755
    MOVSD ES:EDI,ESI                    ; 0052b758
    MOVSD ES:EDI,ESI                    ; 0052b759
    MOVSD ES:EDI,ESI                    ; 0052b75a
    FLD float ptr [ESP + 0x78]          ; 0052b75b
    FLD float ptr [ESP + 0x7c]          ; 0052b75f
    FLD float ptr [ESP + 0x80]          ; 0052b763
    LEA EDI,[ESP + 0x18]                ; 0052b76a
    LEA ESI,[ESP + 0x3c]                ; 0052b76e
    FXCH ST2                            ; 0052b772
    FADD float ptr [ESP + 0x54]         ; 0052b774
    FXCH                                ; 0052b778
    FADD float ptr [ESP + 0x58]         ; 0052b77a
    FXCH ST2                            ; 0052b77e
    FADD float ptr [ESP + 0x5c]         ; 0052b780
    FXCH                                ; 0052b784
    FSTP float ptr [ESP + 0x3c]         ; 0052b786
    FXCH                                ; 0052b78a
    FSTP float ptr [ESP + 0x40]         ; 0052b78c
    FSTP float ptr [ESP + 0x44]         ; 0052b790
    MOVSD ES:EDI,ESI                    ; 0052b794
    MOVSD ES:EDI,ESI                    ; 0052b795
    MOVSD ES:EDI,ESI                    ; 0052b796
    FLD float ptr [0x005e53fd]          ; 0052b797 | DAT_005e53fd
    FLD float ptr [ESP + 0x18]          ; 0052b79d
    FMUL ST1                            ; 0052b7a1
    FLD float ptr [ESP + 0x1c]          ; 0052b7a3
    FMUL ST2                            ; 0052b7a7
    FLD float ptr [ESP + 0x20]          ; 0052b7a9
    FMULP ST3                           ; 0052b7ad
    LEA EAX,[ESP + 0x30]                ; 0052b7af
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0052b7b3
    PUSH EAX                            ; 0052b7ba
    LEA EDI,[ESP + 0x34]                ; 0052b7bb
    LEA ESI,[ESP + 0x28]                ; 0052b7bf
    FXCH                                ; 0052b7c3
    FSTP float ptr [ESP + 0x28]         ; 0052b7c5
    FSTP float ptr [ESP + 0x2c]         ; 0052b7c9
    FSTP float ptr [ESP + 0x30]         ; 0052b7cd
    MOVSD ES:EDI,ESI                    ; 0052b7d1
    MOVSD ES:EDI,ESI                    ; 0052b7d2
    MOVSD ES:EDI,ESI                    ; 0052b7d3
    PUSH EDX                            ; 0052b7d4
    FLD float ptr [ESP + 0x40]          ; 0052b7d5
    LEA ESI,[ESP + 0x14]                ; 0052b7d9
    FADD float ptr [0x005e5401]         ; 0052b7dd | DAT_005e5401
    LEA EDI,[ESP + 0x50]                ; 0052b7e3
    FSTP float ptr [ESP + 0x40]         ; 0052b7e7
    CALL core_actor.cpp_FUN_00408d70    ; 0052b7eb
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0052b7f0
    LEA EAX,[EBP + 0x30]                ; 0052b7f3
    LEA ESI,[ESP + 0xc]                 ; 0052b7f6
    PUSH EAX                            ; 0052b7fa
    MOVSD ES:EDI,ESI                    ; 0052b7fb
    MOVSD ES:EDI,ESI                    ; 0052b7fc
    MOVSD ES:EDI,ESI                    ; 0052b7fd
    LEA EAX,[ESP + 0x4c]                ; 0052b7fe
    FLD float ptr [ESP + 0x50]          ; 0052b802
    PUSH EAX                            ; 0052b806
    FADD float ptr [0x005e5405]         ; 0052b807 | DAT_005e5405
    PUSH EBP                            ; 0052b80d
    FSTP float ptr [ESP + 0x58]         ; 0052b80e
    MOV EBX,dword ptr [EBP + 0x2b0]     ; 0052b812
    CALL dword ptr [EBX + 0x70]         ; 0052b818
    MOV EAX,0x1                         ; 0052b81b
    ADD ESP,0xc                         ; 0052b820
    POP EBX                             ; 0052b823
    POP ESI                             ; 0052b824
    POP EDI                             ; 0052b825
    ADD ESP,0x78                        ; 0052b826
    POP EBP                             ; 0052b829
    RET                                 ; 0052b82a

