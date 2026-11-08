; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0045c040(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_wp_nomana_wav_005bb1b6
;   TerminatedCString s_wp_disease_throw_wav_005bb1c4
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_006045f8
;
; Called Functions:
;   FUN_004a39d0
;   FUN_005609d0
;   FUN_0057b880
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0045c040
        ;   Label: FUN_0045c040
    PUSH EDI                            ; 0045c041
    MOV ESI,dword ptr [ESP + 0xc]       ; 0045c042
    PUSH ESI                            ; 0045c046
    CALL FUN_0057b880                   ; 0045c047
        ;   XREF to: 0057b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b880()
    ADD ESP,0x4                         ; 0045c04c
    LEA EDI,[ESI + 0x20]                ; 0045c04f
    TEST EAX,EAX                        ; 0045c052
    JZ 0x0045c0ad                       ; 0045c054
        ;   XREF to: 0045c0ad (CONDITIONAL_JUMP)  ; LAB_0045c0ad
    PUSH EBX                            ; 0045c056
    LEA EBX,[ESI + 0x598]               ; 0045c057
    PUSH EBX                            ; 0045c05d
    LEA EAX,[ESI + 0x30]                ; 0045c05e
    PUSH EAX                            ; 0045c061
    PUSH EDI                            ; 0045c062
    MOV ECX,dword ptr [0x005fc5a0]      ; 0045c063 | DAT_005fc5a0
    PUSH ECX                            ; 0045c069
    CALL FUN_004a39d0                   ; 0045c06a
        ;   XREF to: 004a39d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a39d0()
    ADD ESP,0x10                        ; 0045c06f
    PUSH EDI                            ; 0045c072
    PUSH 0x5bb1c4                       ; 0045c073 | = "wp_disease_throw.wav"
    PUSH ESI                            ; 0045c078
    MOV EDI,dword ptr [0x006045f8]      ; 0045c079 | DAT_006045f8
    PUSH EDI                            ; 0045c07f
    CALL FUN_005609d0                   ; 0045c080
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005609d0()
    MOV EAX,0x1                         ; 0045c085
    MOV dword ptr [EBX + 0x8],0x0       ; 0045c08a
    ADD ESP,0x10                        ; 0045c091
    MOV EDX,dword ptr [EBX + 0x8]       ; 0045c094
    MOV dword ptr [EBX + 0x4],EDX       ; 0045c097
    MOV EDX,dword ptr [EBX + 0x4]       ; 0045c09a
    MOV dword ptr [EBX],EDX             ; 0045c09d
    MOV dword ptr [ESI + 0x300],0x40000000 ; 0045c09f
    POP EBX                             ; 0045c0a9
    POP EDI                             ; 0045c0aa
    POP ESI                             ; 0045c0ab
    RET                                 ; 0045c0ac
    PUSH EDI                            ; 0045c0ad
        ;   Label: LAB_0045c0ad
    PUSH 0x5bb1b6                       ; 0045c0ae | = "wp_nomana.wav"
    PUSH ESI                            ; 0045c0b3
    MOV EDX,dword ptr [0x006045f8]      ; 0045c0b4 | DAT_006045f8
    PUSH EDX                            ; 0045c0ba
    CALL FUN_005609d0                   ; 0045c0bb
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005609d0()
    ADD ESP,0x10                        ; 0045c0c0
    XOR EAX,EAX                         ; 0045c0c3
    POP EDI                             ; 0045c0c5
    POP ESI                             ; 0045c0c6
    RET                                 ; 0045c0c7

