; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00590060(void)
;
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_004b7140 at 004b715e
;
; Referenced Globals:
;   void* PTR_joyGetPos_005c8434 = 001c88b4
;   undefined4 DAT_01c38af0
;   undefined4 DAT_01c38af4
;   undefined4 DAT_01c38af8
;   undefined4 DAT_01c38afc
;   undefined4 DAT_01c38b00
;   undefined4 DAT_01c38b04
;   undefined4 DAT_01c38b08
;   undefined4 DAT_01c38b0c
;   undefined4 DAT_01c38b14
;   undefined4 DAT_01c38b18
;   undefined4 DAT_026656bc
;
; Called Functions:
;   joyGetPos
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00590060
        ;   Label: FUN_00590060
    PUSH ESI                            ; 00590061
    PUSH EDI                            ; 00590062
    SUB ESP,0x44                        ; 00590063
    CMP dword ptr [0x01c38b04],0x0      ; 00590066 | DAT_01c38b04
    JZ 0x00590120                       ; 0059006d
        ;   XREF to: 00590120 (CONDITIONAL_JUMP)  ; LAB_00590120
    MOV ECX,dword ptr [0x026656bc]      ; 00590073 | DAT_026656bc
    TEST ECX,ECX                        ; 00590079
    JZ 0x0059017e                       ; 0059007b
        ;   XREF to: 0059017e (CONDITIONAL_JUMP)  ; LAB_0059017e
    MOV ESI,0x83                        ; 00590081
    MOV EBX,0x34                        ; 00590086
    MOV EDI,dword ptr [0x01c38b14]      ; 0059008b | DAT_01c38b14
    MOV dword ptr [ESP + 0x4],ESI       ; 00590091
    MOV dword ptr [ESP],EBX             ; 00590095
    TEST EDI,EDI                        ; 00590098
    JNZ 0x00590127                      ; 0059009a
        ;   XREF to: 00590127 (CONDITIONAL_JUMP)  ; LAB_00590127
    CMP dword ptr [0x01c38b0c],0x0      ; 005900a0 | DAT_01c38b0c
        ;   Label: LAB_005900a0
    JZ 0x005900ae                       ; 005900a7
        ;   XREF to: 005900ae (CONDITIONAL_JUMP)  ; LAB_005900ae
    OR byte ptr [ESP + 0x4],0x4         ; 005900a9
    CMP dword ptr [0x01c38b08],0x0      ; 005900ae | DAT_01c38b08
        ;   Label: LAB_005900ae
    JZ 0x005900bc                       ; 005900b5
        ;   XREF to: 005900bc (CONDITIONAL_JUMP)  ; LAB_005900bc
    OR byte ptr [ESP + 0x4],0x8         ; 005900b7
    MOV EAX,ESP                         ; 005900bc
        ;   Label: LAB_005900bc
    PUSH EAX                            ; 005900be
    PUSH 0x0                            ; 005900bf
    CALL dword ptr [0x026656bc]         ; 005900c1 | DAT_026656bc
    MOV EAX,dword ptr [ESP + 0x20]      ; 005900c7
    MOV [0x01c38b00],EAX                ; 005900cb | DAT_01c38b00
    MOV EAX,dword ptr [ESP + 0x8]       ; 005900d0
    MOV [0x01c38af0],EAX                ; 005900d4 | DAT_01c38af0
    MOV EAX,dword ptr [ESP + 0xc]       ; 005900d9
    MOV [0x01c38af4],EAX                ; 005900dd | DAT_01c38af4
    MOV EAX,dword ptr [ESP + 0x14]      ; 005900e2
    MOV [0x01c38af8],EAX                ; 005900e6 | DAT_01c38af8
    MOV EAX,dword ptr [ESP + 0x10]      ; 005900eb
    MOV ECX,dword ptr [0x01c38b14]      ; 005900ef | DAT_01c38b14
    MOV [0x01c38afc],EAX                ; 005900f5 | DAT_01c38afc
    TEST ECX,ECX                        ; 005900fa
    JZ 0x00590120                       ; 005900fc
        ;   XREF to: 00590120 (CONDITIONAL_JUMP)  ; LAB_00590120
    MOV EBX,dword ptr [ESP + 0x28]      ; 005900fe
    CMP EBX,0x4650                      ; 00590102
    JNC 0x00590162                      ; 00590108
        ;   XREF to: 00590162 (CONDITIONAL_JUMP)  ; LAB_00590162
    TEST EBX,EBX                        ; 0059010a
    JBE 0x00590134                      ; 0059010c
        ;   XREF to: 00590134 (CONDITIONAL_JUMP)  ; LAB_00590134
    CMP EBX,0x2328                      ; 0059010e
    JNZ 0x00590158                      ; 00590114
        ;   XREF to: 00590158 (CONDITIONAL_JUMP)  ; LAB_00590158
    MOV dword ptr [0x01c38b18],0x4      ; 00590116 | DAT_01c38b18
    ADD ESP,0x44                        ; 00590120
        ;   Label: LAB_00590120
    POP EDI                             ; 00590123
    POP ESI                             ; 00590124
    POP EBX                             ; 00590125
    RET                                 ; 00590126
    MOV dword ptr [ESP + 0x4],0xc3      ; 00590127
        ;   Label: LAB_00590127
    JMP 0x005900a0                      ; 0059012f
        ;   XREF to: 005900a0 (UNCONDITIONAL_JUMP)  ; LAB_005900a0
    MOV dword ptr [0x01c38b18],0x1      ; 00590134 | DAT_01c38b18
        ;   Label: LAB_00590134
    JMP 0x00590120                      ; 0059013e
        ;   XREF to: 00590120 (UNCONDITIONAL_JUMP)  ; LAB_00590120
    MOV dword ptr [0x01c38b18],0x2      ; 00590140 | DAT_01c38b18
        ;   Label: LAB_00590140
    JMP 0x00590120                      ; 0059014a
        ;   XREF to: 00590120 (UNCONDITIONAL_JUMP)  ; LAB_00590120
    MOV dword ptr [0x01c38b18],0x3      ; 0059014c | DAT_01c38b18
        ;   Label: LAB_0059014c
    JMP 0x00590120                      ; 00590156
        ;   XREF to: 00590120 (UNCONDITIONAL_JUMP)  ; LAB_00590120
    XOR EDX,EDX                         ; 00590158
        ;   Label: LAB_00590158
    MOV dword ptr [0x01c38b18],EDX      ; 0059015a | DAT_01c38b18
    JMP 0x00590120                      ; 00590160
        ;   XREF to: 00590120 (UNCONDITIONAL_JUMP)  ; LAB_00590120
    JBE 0x00590140                      ; 00590162
        ;   XREF to: 00590140 (CONDITIONAL_JUMP)  ; LAB_00590140
        ;   Label: LAB_00590162
    CMP EBX,0x6978                      ; 00590164
    JC 0x00590158                       ; 0059016a
        ;   XREF to: 00590158 (CONDITIONAL_JUMP)  ; LAB_00590158
    JBE 0x0059014c                      ; 0059016c
        ;   XREF to: 0059014c (CONDITIONAL_JUMP)  ; LAB_0059014c
    CMP EBX,0xffff                      ; 0059016e
    XOR EDX,EDX                         ; 00590174
    MOV dword ptr [0x01c38b18],EDX      ; 00590176 | DAT_01c38b18
    JMP 0x00590120                      ; 0059017c
        ;   XREF to: 00590120 (UNCONDITIONAL_JUMP)  ; LAB_00590120
    LEA EAX,[ESP + 0x34]                ; 0059017e
        ;   Label: LAB_0059017e
    PUSH EAX                            ; 00590182
    PUSH ECX                            ; 00590183
    CALL dword ptr CS:[0x5c8434]        ; 00590184 | PTR_joyGetPos_005c8434
    MOV EAX,dword ptr [ESP + 0x40]      ; 0059018b
    MOV [0x01c38b00],EAX                ; 0059018f | DAT_01c38b00
    MOV EAX,dword ptr [ESP + 0x34]      ; 00590194
    MOV [0x01c38af0],EAX                ; 00590198 | DAT_01c38af0
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059019d
    MOV [0x01c38af4],EAX                ; 005901a1 | DAT_01c38af4
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005901a6
    MOV [0x01c38afc],EAX                ; 005901aa | DAT_01c38afc
    ADD ESP,0x44                        ; 005901af
    POP EDI                             ; 005901b2
    POP ESI                             ; 005901b3
    POP EBX                             ; 005901b4
    RET                                 ; 005901b5

