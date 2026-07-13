; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cea50(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7648
;   undefined4 DAT_01c00c4c
;
; Called Functions:
;   FUN_004cd0e0
;   FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cea50
        ;   Label: FUN_004cea50
    PUSH ESI                            ; 004cea51
    PUSH EDI                            ; 004cea52
    PUSH EBP                            ; 004cea53
    MOV EBP,ESP                         ; 004cea54
    SUB ESP,0x3c                        ; 004cea56
    AND ESP,0xfffffff8                  ; 004cea59
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cea5c
    LEA ESI,[ESP + 0xc]                 ; 004cea5f
    MOV EDI,ESP                         ; 004cea63
    MOV dword ptr [ESP + 0x4],EAX       ; 004cea65
    MOV EAX,ESP                         ; 004cea69
    XOR EDX,EDX                         ; 004cea6b
    PUSH EAX                            ; 004cea6d
    MOV dword ptr [ESP + 0x4],EDX       ; 004cea6e
    MOV dword ptr [ESP + 0xc],EDX       ; 004cea72
    CALL FUN_004cd0e0                   ; 004cea76
        ;   XREF to: 004cd0e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cd0e0()
    LEA ESI,[ESP + 0x10]                ; 004cea7b
    ADD ESP,0x4                         ; 004cea7f
    MOVSD ES:EDI,ESI                    ; 004cea82
    MOVSD ES:EDI,ESI                    ; 004cea83
    MOVSD ES:EDI,ESI                    ; 004cea84
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cea85
    TEST EBX,EBX                        ; 004cea89
    JLE 0x004ceac8                      ; 004cea8b
        ;   XREF to: 004ceac8 (CONDITIONAL_JUMP)  ; LAB_004ceac8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cea8d
    FILD dword ptr [0x01c00c4c]         ; 004cea90 | DAT_01c00c4c
    MOV dword ptr [ESP + 0x34],EAX      ; 004cea96
    MOV dword ptr [ESP + 0x38],EBX      ; 004cea9a
    FILD dword ptr [ESP + 0x34]         ; 004cea9e
    FCHS                                ; 004ceaa2
    FMULP                               ; 004ceaa4
    FILD dword ptr [ESP + 0x38]         ; 004ceaa6
    FDIVP                               ; 004ceaaa
    FILD dword ptr [0x005b7648]         ; 004ceaac | DAT_005b7648
    FDIVP                               ; 004ceab2
    CALL FUN_00563a30                   ; 004ceab4
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x30]        ; 004ceab9
    MOV EAX,dword ptr [ESP + 0x30]      ; 004ceabd
    MOV ESP,EBP                         ; 004ceac1
    POP EBP                             ; 004ceac3
    POP EDI                             ; 004ceac4
    POP ESI                             ; 004ceac5
    POP EBX                             ; 004ceac6
    RET                                 ; 004ceac7
    MOV dword ptr [ESP + 0x30],0xffffffff ; 004ceac8
        ;   Label: LAB_004ceac8
    MOV EAX,dword ptr [ESP + 0x30]      ; 004cead0
    MOV ESP,EBP                         ; 004cead4
    POP EBP                             ; 004cead6
    POP EDI                             ; 004cead7
    POP ESI                             ; 004cead8
    POP EBX                             ; 004cead9
    RET                                 ; 004ceada

