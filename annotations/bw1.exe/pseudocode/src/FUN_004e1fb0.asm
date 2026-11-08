; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e1fb0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00601450
;   undefined4 DAT_00612560
;   undefined4 DAT_00622c18
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_004087b0
;   FUN_004087f0
;   FUN_004207b0
;   FUN_00482210
;   FUN_00484f00
;   FUN_004e1db0
;   FUN_00553140
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e1fb0
        ;   Label: FUN_004e1fb0
    PUSH EDI                            ; 004e1fb1
    PUSH EBP                            ; 004e1fb2
    SUB ESP,0x30                        ; 004e1fb3
    MOV EBP,dword ptr [ESP + 0x40]      ; 004e1fb6
    MOV EAX,dword ptr [ESP + 0x44]      ; 004e1fba
    CMP dword ptr [EBP + 0x370],0x0     ; 004e1fbe
    JZ 0x004e2143                       ; 004e1fc5
        ;   XREF to: 004e2143 (CONDITIONAL_JUMP)  ; LAB_004e2143
    TEST EAX,EAX                        ; 004e1fcb
    JNZ 0x004e1fdc                      ; 004e1fcd
        ;   XREF to: 004e1fdc (CONDITIONAL_JUMP)  ; LAB_004e1fdc
    CMP dword ptr [EBP + 0xb3c],0x0     ; 004e1fcf
    JZ 0x004e212a                       ; 004e1fd6
        ;   XREF to: 004e212a (CONDITIONAL_JUMP)  ; LAB_004e212a
    PUSH EBP                            ; 004e1fdc
        ;   Label: LAB_004e1fdc
    MOV dword ptr [EBP + 0xb3c],0x0     ; 004e1fdd
    CALL FUN_004087b0                   ; 004e1fe7
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 004e1fec
    PUSH 0x0                            ; 004e1fef
    MOV EDX,dword ptr [EBP + 0x154]     ; 004e1ff1
    PUSH EBP                            ; 004e1ff7
    LEA ESI,[ESP + 0x20]                ; 004e1ff8
    LEA EDI,[ESP + 0x8]                 ; 004e1ffc
    CALL dword ptr [EDX + 0x1c]         ; 004e2000
    MOV ECX,0x6                         ; 004e2003
    ADD ESP,0x4                         ; 004e2008
    LEA EDX,[ESP + 0x4]                 ; 004e200b
    LEA ESI,[ESP + 0x1c]                ; 004e200f
    PUSH EDX                            ; 004e2013
    MOVSD.REP ES:EDI,ESI                ; 004e2014
    CALL FUN_004207b0                   ; 004e2016
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    MOV EDI,dword ptr [EBP + 0x180]     ; 004e201b
    ADD ESP,0x8                         ; 004e2021
    TEST EDI,EDI                        ; 004e2024
    JZ 0x004e2131                       ; 004e2026
        ;   XREF to: 004e2131 (CONDITIONAL_JUMP)  ; LAB_004e2131
    LEA EDX,[EBP + 0x374]               ; 004e202c
    PUSH EDX                            ; 004e2032
    MOV EDX,dword ptr [0x00612560]      ; 004e2033 | DAT_00612560
    PUSH EDX                            ; 004e2039 | DAT_01bc120c
    CALL FUN_00484f00                   ; 004e203a
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
        ;   Label: LAB_004e203a
    ADD ESP,0x8                         ; 004e203f
    PUSH EBX                            ; 004e2042
    LEA ECX,[EBP + 0x38c]               ; 004e2043
    MOV EBX,dword ptr [EBP + 0xb34]     ; 004e2049
    LEA EDI,[EBP + 0x4b8]               ; 004e204f
    XOR ESI,ESI                         ; 004e2055
    MOV EDX,EDI                         ; 004e2057
    TEST EBX,EBX                        ; 004e2059
    JLE 0x004e20a0                      ; 004e205b
        ;   XREF to: 004e20a0 (CONDITIONAL_JUMP)  ; LAB_004e20a0
    MOV EBX,EDX                         ; 004e205d
        ;   Label: LAB_004e205d
    MOV EAX,ECX                         ; 004e205f
    FLD float ptr [EAX]                 ; 004e2061
    FMUL float ptr [0x00601450]         ; 004e2063 | DAT_00601450
    FISTP dword ptr [EBX]               ; 004e2069
    FLD float ptr [EAX + 0x4]           ; 004e206b
    FMUL float ptr [0x00601450]         ; 004e206e | DAT_00601450
    FISTP dword ptr [EBX + 0x4]         ; 004e2074
    FLD float ptr [EAX + 0x8]           ; 004e2077
    FMUL float ptr [0x00601450]         ; 004e207a | DAT_00601450
    FISTP dword ptr [EBX + 0x8]         ; 004e2080
    INC ESI                             ; 004e2083
    ADD ECX,0xc                         ; 004e2084
    MOV EAX,dword ptr [EBP + 0xb34]     ; 004e2087
    ADD EDX,0xc                         ; 004e208d
    CMP ESI,EAX                         ; 004e2090
    JL 0x004e205d                       ; 004e2092
        ;   XREF to: 004e205d (CONDITIONAL_JUMP)  ; LAB_004e205d
    LEA EAX,[EAX]                       ; 004e2094
    LEA EDX,[EDX]                       ; 004e209a
    PUSH EDI                            ; 004e20a0
        ;   Label: LAB_004e20a0
    MOV EDX,dword ptr [EBP + 0xb34]     ; 004e20a1
    PUSH EDX                            ; 004e20a7
    MOV ECX,dword ptr [0x00622c18]      ; 004e20a8 | DAT_00622c18
    PUSH ECX                            ; 004e20ae | DAT_01e82168
    XOR EDI,EDI                         ; 004e20af
    CALL FUN_00553140                   ; 004e20b1
        ;   XREF to: 00553140 (UNCONDITIONAL_CALL)  ; undefined FUN_00553140()
    MOV EBX,dword ptr [EBP + 0xb38]     ; 004e20b6
    ADD ESP,0xc                         ; 004e20bc
    TEST EBX,EBX                        ; 004e20bf
    JLE 0x004e2120                      ; 004e20c1
        ;   XREF to: 004e2120 (CONDITIONAL_JUMP)  ; LAB_004e2120
    LEA ESI,[EBP + 0x6ac]               ; 004e20c3
    MOV EBX,EBP                         ; 004e20c9
    PUSH 0xc1                           ; 004e20cb
        ;   Label: LAB_004e20cb
    MOV dword ptr [EBX + 0x6b4],0x0     ; 004e20d0
    MOV EAX,[0x00612560]                ; 004e20da | DAT_00612560
    MOV dword ptr [EBX + 0x6b8],0x0     ; 004e20df
    PUSH ESI                            ; 004e20e9
    INC EDI                             ; 004e20ea
    MOV dword ptr [EBX + 0x6bc],0x0     ; 004e20eb
    PUSH EAX                            ; 004e20f5 | DAT_01bc120c
    MOV dword ptr [EBX + 0x6c0],0x0     ; 004e20f6
    ADD EBX,0x48                        ; 004e2100
    CALL FUN_00482210                   ; 004e2103
        ;   XREF to: 00482210 (UNCONDITIONAL_CALL)  ; undefined FUN_00482210()
    ADD ESI,0x48                        ; 004e2108
    MOV EDX,dword ptr [EBP + 0xb38]     ; 004e210b
    ADD ESP,0xc                         ; 004e2111
    CMP EDI,EDX                         ; 004e2114
    JL 0x004e20cb                       ; 004e2116
        ;   XREF to: 004e20cb (CONDITIONAL_JUMP)  ; LAB_004e20cb
    LEA EAX,[EAX]                       ; 004e2118
    MOV EDX,EDX                         ; 004e211e
    PUSH EBP                            ; 004e2120
        ;   Label: LAB_004e2120
    CALL FUN_004087f0                   ; 004e2121
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 004e2126
    POP EBX                             ; 004e2129
    ADD ESP,0x30                        ; 004e212a
        ;   Label: LAB_004e212a
    POP EBP                             ; 004e212d
    POP EDI                             ; 004e212e
    POP ESI                             ; 004e212f
    RET                                 ; 004e2130
    LEA EDX,[EBP + 0x164]               ; 004e2131
        ;   Label: LAB_004e2131
    PUSH EDX                            ; 004e2137
    MOV EAX,[0x00612560]                ; 004e2138 | DAT_00612560
    PUSH EAX                            ; 004e213d | DAT_01bc120c
    JMP 0x004e203a                      ; 004e213e
        ;   XREF to: 004e203a (UNCONDITIONAL_JUMP)  ; LAB_004e203a
    TEST EAX,EAX                        ; 004e2143
        ;   Label: LAB_004e2143
    JZ 0x004e212a                       ; 004e2145
        ;   XREF to: 004e212a (CONDITIONAL_JUMP)  ; LAB_004e212a
    CMP dword ptr [EBP + 0x180],0x0     ; 004e2147
    JZ 0x004e212a                       ; 004e214e
        ;   XREF to: 004e212a (CONDITIONAL_JUMP)  ; LAB_004e212a
    CMP dword ptr [EBP + 0x1e8],0x0     ; 004e2150
    JZ 0x004e212a                       ; 004e2157
        ;   XREF to: 004e212a (CONDITIONAL_JUMP)  ; LAB_004e212a
    PUSH EBP                            ; 004e2159
    CALL FUN_004e1db0                   ; 004e215a
        ;   XREF to: 004e1db0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1db0()
    ADD ESP,0x4                         ; 004e215f
    ADD ESP,0x30                        ; 004e2162
    POP EBP                             ; 004e2165
    POP EDI                             ; 004e2166
    POP ESI                             ; 004e2167
    RET                                 ; 004e2168

