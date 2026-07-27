; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_conveyor_cpp_CConveyor_ctor_FUN_0043b050(undefined4 param_1)
;
;
; XREF[1]:
;   core_conveyor.cpp_FUN_0043b020 at 0043b033
;
; Referenced Globals:
;   TerminatedCString s_none_0057b1d4
;   undefined4 s_one_0057b1d4+1
;   undefined4 s_ne_0057b1d4+2
;   undefined4 s_e_0057b1d4+3
;   TerminatedCString s_none_0057b1d9
;   undefined4 s_one_0057b1d9+1
;   undefined4 s_ne_0057b1d9+2
;   undefined4 s_e_0057b1d9+3
;   undefined1* PTR_core_conveyor.cpp_FUN_0043b110_0059b734 = 0043b110
;
; Called Functions:
;   core_platfrm.cpp_FUN_004f5d90
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0043b050
        ;   Label: core_conveyor.cpp_CConveyor_ctor_FUN_0043b050
    PUSH EDI                            ; 0043b051
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043b052
    PUSH EDX                            ; 0043b056
    CALL core_platfrm.cpp_FUN_004f5d90  ; 0043b057
        ;   XREF to: 004f5d90 (UNCONDITIONAL_CALL)  ; undefined core_platfrm.cpp_FUN_004f5d90()
    MOV dword ptr [EAX + 0x14c],0x59b734 ; 0043b05c | PTR_core_conveyor.cpp_FUN_0043b110_0059b734
    MOV ESI,0x57b1d4                    ; 0043b066 | = "none"
    MOV dword ptr [EAX + 0x720],0x3f800000 ; 0043b06b
    MOV EDX,EAX                         ; 0043b075
    MOV dword ptr [EAX + 0x728],0x3f800000 ; 0043b077
    ADD ESP,0x4                         ; 0043b081
    MOV dword ptr [EAX + 0x724],0x3dcccccd ; 0043b084
    LEA EDI,[EAX + 0x738]               ; 0043b08e
    MOV dword ptr [EAX + 0x800],0x0     ; 0043b094
    PUSH EDI                            ; 0043b09e
    MOV AL,byte ptr [ESI]               ; 0043b09f | = "none" | s_ne_0057b1d4+2
        ;   Label: LAB_0043b09f
    MOV byte ptr [EDI],AL               ; 0043b0a1
    CMP AL,0x0                          ; 0043b0a3
    JZ 0x0043b0b7                       ; 0043b0a5
        ;   XREF to: 0043b0b7 (CONDITIONAL_JUMP)  ; LAB_0043b0b7
    MOV AL,byte ptr [ESI + 0x1]         ; 0043b0a7 | s_one_0057b1d4+1 | s_e_0057b1d4+3
    ADD ESI,0x2                         ; 0043b0aa
    MOV byte ptr [EDI + 0x1],AL         ; 0043b0ad
    ADD EDI,0x2                         ; 0043b0b0
    CMP AL,0x0                          ; 0043b0b3
    JNZ 0x0043b09f                      ; 0043b0b5
        ;   XREF to: 0043b09f (CONDITIONAL_JUMP)  ; LAB_0043b09f
    POP EDI                             ; 0043b0b7
        ;   Label: LAB_0043b0b7
    MOV ESI,0x57b1d9                    ; 0043b0b8 | = "none"
    LEA EDI,[EDX + 0x79c]               ; 0043b0bd
    PUSH EDI                            ; 0043b0c3
    MOV AL,byte ptr [ESI]               ; 0043b0c4 | = "none" | s_ne_0057b1d9+2
        ;   Label: LAB_0043b0c4
    MOV byte ptr [EDI],AL               ; 0043b0c6
    CMP AL,0x0                          ; 0043b0c8
    JZ 0x0043b0dc                       ; 0043b0ca
        ;   XREF to: 0043b0dc (CONDITIONAL_JUMP)  ; LAB_0043b0dc
    MOV AL,byte ptr [ESI + 0x1]         ; 0043b0cc | s_one_0057b1d9+1 | s_e_0057b1d9+3
    ADD ESI,0x2                         ; 0043b0cf
    MOV byte ptr [EDI + 0x1],AL         ; 0043b0d2
    ADD EDI,0x2                         ; 0043b0d5
    CMP AL,0x0                          ; 0043b0d8
    JNZ 0x0043b0c4                      ; 0043b0da
        ;   XREF to: 0043b0c4 (CONDITIONAL_JUMP)  ; LAB_0043b0c4
    POP EDI                             ; 0043b0dc
        ;   Label: LAB_0043b0dc
    MOV dword ptr [EDX + 0x72c],0x0     ; 0043b0dd
    MOV dword ptr [EDX + 0x730],0x0     ; 0043b0e7
    MOV dword ptr [EDX + 0x734],0x3f800000 ; 0043b0f1
    MOV EAX,EDX                         ; 0043b0fb
    MOV byte ptr [EDX + 0x804],0x0      ; 0043b0fd
    POP EDI                             ; 0043b104
    POP ESI                             ; 0043b105
    RET                                 ; 0043b106

