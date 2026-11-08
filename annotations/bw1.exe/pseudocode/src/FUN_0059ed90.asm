; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059ed90(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_0059ee60 at 0059ee9a
;
; Referenced Globals:
;   TerminatedCString s_Error_receiving_s_from_s_005f8836
;
; Called Functions:
;   FUN_0059c970
;   FUN_0059ca30
;   FUN_0059cb20
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ed90
        ;   Label: FUN_0059ed90
    PUSH ESI                            ; 0059ed91
    SUB ESP,0x4                         ; 0059ed92
    MOV EBX,dword ptr [ESP + 0x10]      ; 0059ed95
    MOV EDX,0x4                         ; 0059ed99
    LEA ESI,[EBX + 0xd2c]               ; 0059ed9e
    MOV dword ptr [EBX + 0xa14],0x0     ; 0059eda4
    PUSH ESI                            ; 0059edae
    MOV dword ptr [EBX + 0xa10],0x0     ; 0059edaf
    MOV dword ptr [ESP + 0x4],EDX       ; 0059edb9
    CALL FUN_0059c970                   ; 0059edbd
        ;   XREF to: 0059c970 (UNCONDITIONAL_CALL)  ; undefined FUN_0059c970()
    ADD ESP,0x4                         ; 0059edc2
    TEST EAX,EAX                        ; 0059edc5
    JNZ 0x0059edfe                      ; 0059edc7
        ;   XREF to: 0059edfe (CONDITIONAL_JUMP)  ; LAB_0059edfe
    TEST byte ptr [ESP],0x4             ; 0059edc9
        ;   Label: LAB_0059edc9
    JNZ 0x0059ee0c                      ; 0059edcd
        ;   XREF to: 0059ee0c (CONDITIONAL_JUMP)  ; LAB_0059ee0c
    PUSH 0x0                            ; 0059edcf
    PUSH 0x200                          ; 0059edd1
    LEA EAX,[EBX + 0x610]               ; 0059edd6
    PUSH EAX                            ; 0059eddc
    LEA EAX,[EBX + 0xd2c]               ; 0059eddd
    PUSH EAX                            ; 0059ede3
    CALL FUN_0059cb20                   ; 0059ede4
        ;   XREF to: 0059cb20 (UNCONDITIONAL_CALL)  ; undefined FUN_0059cb20()
    ADD ESP,0x10                        ; 0059ede9
    CMP EAX,-0x2                        ; 0059edec
    JNZ 0x0059ee3f                      ; 0059edef
        ;   XREF to: 0059ee3f (CONDITIONAL_JUMP)  ; LAB_0059ee3f
    CMP dword ptr [ESP + 0x14],0x0      ; 0059edf1
    JZ 0x0059ee0c                       ; 0059edf6
        ;   XREF to: 0059ee0c (CONDITIONAL_JUMP)  ; LAB_0059ee0c
    ADD ESP,0x4                         ; 0059edf8
        ;   Label: LAB_0059edf8
    POP ESI                             ; 0059edfb
    POP EBX                             ; 0059edfc
    RET                                 ; 0059edfd
    PUSH ESI                            ; 0059edfe
        ;   Label: LAB_0059edfe
    CALL FUN_0059ca30                   ; 0059edff
        ;   XREF to: 0059ca30 (UNCONDITIONAL_CALL)  ; undefined FUN_0059ca30()
    ADD ESP,0x4                         ; 0059ee04
    MOV dword ptr [ESP],EAX             ; 0059ee07
    JMP 0x0059edc9                      ; 0059ee0a
        ;   XREF to: 0059edc9 (UNCONDITIONAL_JUMP)  ; LAB_0059edc9
    LEA EAX,[EBX + 0x400]               ; 0059ee0c
        ;   Label: LAB_0059ee0c
    PUSH EAX                            ; 0059ee12
    LEA EAX,[EBX + 0x500]               ; 0059ee13
    PUSH EAX                            ; 0059ee19
    PUSH 0x5f8836                       ; 0059ee1a | = "Error receiving %s from %s"
    LEA EAX,[EBX + 0xa18]               ; 0059ee1f
    PUSH EAX                            ; 0059ee25
    CALL FUN_005bfb40                   ; 0059ee26
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    MOV EAX,0xfffffffd                  ; 0059ee2b
    ADD ESP,0x10                        ; 0059ee30
    MOV dword ptr [EBX + 0xd28],0xfffffffb ; 0059ee33
    JMP 0x0059edf8                      ; 0059ee3d
        ;   XREF to: 0059edf8 (UNCONDITIONAL_JUMP)  ; LAB_0059edf8
    TEST EAX,EAX                        ; 0059ee3f
        ;   Label: LAB_0059ee3f
    JL 0x0059ee0c                       ; 0059ee41
        ;   XREF to: 0059ee0c (CONDITIONAL_JUMP)  ; LAB_0059ee0c
    MOV dword ptr [EBX + 0xa14],EAX     ; 0059ee43
    MOV EAX,0xfffffffc                  ; 0059ee49
    ADD ESP,0x4                         ; 0059ee4e
    POP ESI                             ; 0059ee51
    POP EBX                             ; 0059ee52
    RET                                 ; 0059ee53

