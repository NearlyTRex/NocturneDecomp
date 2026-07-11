; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056dbb0(byte *param_1,int param_2)
;
;
; XREF[2]:
;   FUN_00566450 at 00566489
;   FUN_0056db80 at 0056db90
;
; Referenced Globals:
;   undefined4 DAT_02de5c30
;
; Called Functions:
;   FUN_0056da50
;   FUN_0056da80
;   FUN_00570ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056dbb0
        ;   Label: FUN_0056dbb0
    PUSH ESI                            ; 0056dbb1
    PUSH EDI                            ; 0056dbb2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056dbb3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0056dbb7
    XOR ESI,ESI                         ; 0056dbbb
    PUSH EBX                            ; 0056dbbd
        ;   Label: LAB_0056dbbd
    CALL FUN_00570ca0                   ; 0056dbbe
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00570ca0()
    ADD ESP,0x4                         ; 0056dbc3
    TEST EAX,EAX                        ; 0056dbc6
    JNZ 0x0056dc0a                      ; 0056dbc8
        ;   XREF to: 0056dc0a (CONDITIONAL_JUMP)  ; LAB_0056dc0a
    TEST EDI,EDI                        ; 0056dbca
    JBE 0x0056dc0a                      ; 0056dbcc
        ;   XREF to: 0056dc0a (CONDITIONAL_JUMP)  ; LAB_0056dc0a
    CMP dword ptr [0x02de5c30],0x0      ; 0056dbce | DAT_02de5c30
    JZ 0x0056dbfb                       ; 0056dbd5
        ;   XREF to: 0056dbfb (CONDITIONAL_JUMP)  ; LAB_0056dbfb
    MOV AL,byte ptr [EBX]               ; 0056dbd7
    MOV AL,byte ptr [EAX + 0x2de5c41]   ; 0056dbd9
    AND AL,0x1                          ; 0056dbdf
    AND EAX,0xff                        ; 0056dbe1
    JZ 0x0056dbfb                       ; 0056dbe6
        ;   XREF to: 0056dbfb (CONDITIONAL_JUMP)  ; LAB_0056dbfb
    CMP byte ptr [EBX + 0x1],0x0        ; 0056dbe8
    JZ 0x0056dc0a                       ; 0056dbec
        ;   XREF to: 0056dc0a (CONDITIONAL_JUMP)  ; LAB_0056dc0a
    PUSH EBX                            ; 0056dbee
    CALL FUN_0056da50                   ; 0056dbef
        ;   XREF to: 0056da50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056da50()
    ADD ESP,0x4                         ; 0056dbf4
    ADD ESI,EAX                         ; 0056dbf7
    JMP 0x0056dbfc                      ; 0056dbf9
        ;   XREF to: 0056dbfc (UNCONDITIONAL_JUMP)  ; LAB_0056dbfc
    INC ESI                             ; 0056dbfb
        ;   Label: LAB_0056dbfb
    PUSH EBX                            ; 0056dbfc
        ;   Label: LAB_0056dbfc
    CALL FUN_0056da80                   ; 0056dbfd
        ;   XREF to: 0056da80 (UNCONDITIONAL_CALL)  ; undefined FUN_0056da80()
    DEC EDI                             ; 0056dc02
    MOV EBX,EAX                         ; 0056dc03
    ADD ESP,0x4                         ; 0056dc05
    JMP 0x0056dbbd                      ; 0056dc08
        ;   XREF to: 0056dbbd (UNCONDITIONAL_JUMP)  ; LAB_0056dbbd
    MOV EAX,ESI                         ; 0056dc0a
        ;   Label: LAB_0056dc0a
    POP EDI                             ; 0056dc0c
    POP ESI                             ; 0056dc0d
    POP EBX                             ; 0056dc0e
    RET                                 ; 0056dc0f

