; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053b130(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_004215f0 at 00421728
;
; Referenced Globals:
;   undefined4 DAT_005e3bc0
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;
; Called Functions:
;   FUN_005380a0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0053b130
        ;   Label: FUN_0053b130
    SUB ESP,0xc                         ; 0053b131
    MOV ESI,dword ptr [ESP + 0x14]      ; 0053b134
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053b138
    TEST EAX,EAX                        ; 0053b13c
    JNZ 0x0053b14b                      ; 0053b13e
        ;   XREF to: 0053b14b (CONDITIONAL_JUMP)  ; LAB_0053b14b
    MOV dword ptr [ESI + 0x161670],EAX  ; 0053b140
    ADD ESP,0xc                         ; 0053b146
    POP ESI                             ; 0053b149
    RET                                 ; 0053b14a
    PUSH EBX                            ; 0053b14b
        ;   Label: LAB_0053b14b
    LEA EBX,[ESP + 0x4]                 ; 0053b14c
    FLD float ptr [EAX]                 ; 0053b150
    FMUL float ptr [0x005e3bc0]         ; 0053b152 | DAT_005e3bc0
    FISTP dword ptr [EBX]               ; 0053b158
    FLD float ptr [EAX + 0x4]           ; 0053b15a
    FMUL float ptr [0x005e3bc0]         ; 0053b15d | DAT_005e3bc0
    FISTP dword ptr [EBX + 0x4]         ; 0053b163
    FLD float ptr [EAX + 0x8]           ; 0053b166
    FMUL float ptr [0x005e3bc0]         ; 0053b169 | DAT_005e3bc0
    FISTP dword ptr [EBX + 0x8]         ; 0053b16f
    PUSH 0x0                            ; 0053b172
    PUSH 0x0                            ; 0053b174
    PUSH 0x0                            ; 0053b176
    LEA EBX,[ESP + 0x10]                ; 0053b178
    PUSH EBX                            ; 0053b17c
    PUSH ESI                            ; 0053b17d
    CALL FUN_005380a0                   ; 0053b17e
        ;   XREF to: 005380a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005380a0()
    MOV EBX,dword ptr [0x0060b034]      ; 0053b183 | DAT_0060b034
    MOV dword ptr [ESI + 0x161670],0x1  ; 0053b189
    MOV EAX,[0x0060b03c]                ; 0053b193 | DAT_0060b03c
    MOV dword ptr [ESI + 0x161674],EBX  ; 0053b198
    MOV dword ptr [ESI + 0x16167c],EAX  ; 0053b19e
    MOV EBX,dword ptr [0x0060b038]      ; 0053b1a4 | DAT_0060b038
    ADD ESP,0x14                        ; 0053b1aa
    MOV dword ptr [ESI + 0x161678],EBX  ; 0053b1ad
    POP EBX                             ; 0053b1b3
    ADD ESP,0xc                         ; 0053b1b4
    POP ESI                             ; 0053b1b7
    RET                                 ; 0053b1b8

