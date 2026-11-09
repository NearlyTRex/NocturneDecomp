; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_drawLineAAWithBlending_FUN_00436f80(int x0,int y0,int x1,int y1,int base_color,uchar blend_color,int blend_mode)
;
; Parameters:
; int              Stack[0x4]:4   x0
; int              Stack[0x8]:4   y0
; int              Stack[0xc]:4   x1
; int              Stack[0x10]:4   y1
; int              Stack[0x14]:4   base_color
; uchar            Stack[0x18]:1   blend_color
; int              Stack[0x1c]:4   blend_mode
;
; Referenced Globals:
;   undefined4 DAT_007e3e84
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;
; Called Functions:
;   cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00437510
;   cockpit_ckptutil.c_putPixel_FUN_00437b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436f80
        ;   Label: cockpit_ckptutil.c_drawLineAAWithBlending_FUN_00436f80
    PUSH ESI                            ; 00436f81
    PUSH EDI                            ; 00436f82
    PUSH EBP                            ; 00436f83
    MOV EBP,ESP                         ; 00436f84
    SUB ESP,0x3c                        ; 00436f86
    AND ESP,0xfffffff8                  ; 00436f89
    MOV EDI,dword ptr [EBP + 0x14]      ; 00436f8c
    MOV ESI,dword ptr [EBP + 0x18]      ; 00436f8f
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00436f92
    MOV EAX,dword ptr [EBP + 0x20]      ; 00436f95
    MOV EDX,dword ptr [EBP + 0x24]      ; 00436f98
    MOV dword ptr [ESP],0x3b800000      ; 00436f9b
    CMP ESI,EAX                         ; 00436fa2
    JG 0x00437020                       ; 00436fa4
        ;   XREF to: 00437020 (CONDITIONAL_JUMP)  ; LAB_00437020
    CMP dword ptr [0x007e3e84],0x0      ; 00436faa | DAT_007e3e84
    JNZ 0x00436fef                      ; 00436fb1
        ;   XREF to: 00436fef (CONDITIONAL_JUMP)  ; LAB_00436fef
    MOV ECX,dword ptr [0x01c6b5a8]      ; 00436fb3 | DAT_01c6b5a8
    CMP EDI,ECX                         ; 00436fb9
    JGE 0x00436fc5                      ; 00436fbb
        ;   XREF to: 00436fc5 (CONDITIONAL_JUMP)  ; LAB_00436fc5
    CMP EBX,ECX                         ; 00436fbd
    JL 0x00437020                       ; 00436fbf
        ;   XREF to: 00437020 (CONDITIONAL_JUMP)  ; LAB_00437020
    MOV ECX,dword ptr [0x01c6b5b0]      ; 00436fc5 | DAT_01c6b5b0
        ;   Label: LAB_00436fc5
    CMP EDI,ECX                         ; 00436fcb
    JLE 0x00436fd3                      ; 00436fcd
        ;   XREF to: 00436fd3 (CONDITIONAL_JUMP)  ; LAB_00436fd3
    CMP EBX,ECX                         ; 00436fcf
    JG 0x00437020                       ; 00436fd1
        ;   XREF to: 00437020 (CONDITIONAL_JUMP)  ; LAB_00437020
    MOV ECX,dword ptr [0x01c6b5ac]      ; 00436fd3 | DAT_01c6b5ac
        ;   Label: LAB_00436fd3
    CMP ESI,ECX                         ; 00436fd9
    JGE 0x00436fe1                      ; 00436fdb
        ;   XREF to: 00436fe1 (CONDITIONAL_JUMP)  ; LAB_00436fe1
    CMP EAX,ECX                         ; 00436fdd
    JL 0x00437020                       ; 00436fdf
        ;   XREF to: 00437020 (CONDITIONAL_JUMP)  ; LAB_00437020
    MOV ECX,dword ptr [0x01c6b5b4]      ; 00436fe1 | DAT_01c6b5b4
        ;   Label: LAB_00436fe1
    CMP ESI,ECX                         ; 00436fe7
    JLE 0x00436fef                      ; 00436fe9
        ;   XREF to: 00436fef (CONDITIONAL_JUMP)  ; LAB_00436fef
    CMP EAX,ECX                         ; 00436feb
    JG 0x00437020                       ; 00436fed
        ;   XREF to: 00437020 (CONDITIONAL_JUMP)  ; LAB_00437020
    SUB EBX,EDI                         ; 00436fef
        ;   Label: LAB_00436fef
    MOV dword ptr [ESP + 0x2c],EBX      ; 00436ff1
    TEST EBX,EBX                        ; 00436ff5
    JL 0x00437027                       ; 00436ff7
        ;   XREF to: 00437027 (CONDITIONAL_JUMP)  ; LAB_00437027
    MOV dword ptr [ESP + 0x24],0x1      ; 00436ff9
    SUB EAX,ESI                         ; 00437001
        ;   Label: LAB_00437001
    MOV dword ptr [ESP + 0x28],EAX      ; 00437003
    JNZ 0x0043704d                      ; 00437007
        ;   XREF to: 0043704d (CONDITIONAL_JUMP)  ; LAB_0043704d
    MOV BL,DL                           ; 00437009
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0043700b
        ;   Label: LAB_0043700b
    DEC EDX                             ; 0043700f
    MOV dword ptr [ESP + 0x2c],EDX      ; 00437010
    JNZ 0x00437038                      ; 00437014
        ;   XREF to: 00437038 (CONDITIONAL_JUMP)  ; LAB_00437038
    LEA EAX,[EAX]                       ; 00437016
    LEA EDX,[EDX]                       ; 0043701c
    MOV ESP,EBP                         ; 00437020
        ;   Label: LAB_00437020
    POP EBP                             ; 00437022
    POP EDI                             ; 00437023
    POP ESI                             ; 00437024
    POP EBX                             ; 00437025
    RET                                 ; 00437026
    NEG EBX                             ; 00437027
        ;   Label: LAB_00437027
    MOV ECX,0xffffffff                  ; 00437029
    MOV dword ptr [ESP + 0x2c],EBX      ; 0043702e
    MOV dword ptr [ESP + 0x24],ECX      ; 00437032
    JMP 0x00437001                      ; 00437036
        ;   XREF to: 00437001 (UNCONDITIONAL_JUMP)  ; LAB_00437001
    ADD EDI,dword ptr [ESP + 0x24]      ; 00437038
        ;   Label: LAB_00437038
    XOR EAX,EAX                         ; 0043703c
    MOV AL,BL                           ; 0043703e
    PUSH EAX                            ; 00437040
    PUSH ESI                            ; 00437041
    PUSH EDI                            ; 00437042
    CALL cockpit_ckptutil.c_putPixel_FUN_00437b80 ; 00437043
        ;   XREF to: 00437b80 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00437b80(int x, int y, int color)
    ADD ESP,0xc                         ; 00437048
    JMP 0x0043700b                      ; 0043704b
        ;   XREF to: 0043700b (UNCONDITIONAL_JUMP)  ; LAB_0043700b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043704d
        ;   Label: LAB_0043704d
    TEST EAX,EAX                        ; 00437051
    JNZ 0x0043707c                      ; 00437053
        ;   XREF to: 0043707c (CONDITIONAL_JUMP)  ; LAB_0043707c
    MOV BL,DL                           ; 00437055
    XOR EAX,EAX                         ; 00437057
        ;   Label: LAB_00437057
    MOV AL,BL                           ; 00437059
    PUSH EAX                            ; 0043705b
    INC ESI                             ; 0043705c
    PUSH ESI                            ; 0043705d
    PUSH EDI                            ; 0043705e
    CALL cockpit_ckptutil.c_putPixel_FUN_00437b80 ; 0043705f
        ;   XREF to: 00437b80 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00437b80(int x, int y, int color)
    ADD ESP,0xc                         ; 00437064
    MOV ECX,dword ptr [ESP + 0x28]      ; 00437067
    DEC ECX                             ; 0043706b
    MOV dword ptr [ESP + 0x28],ECX      ; 0043706c
    CMP ECX,0x1                         ; 00437070
    JNZ 0x00437057                      ; 00437073
        ;   XREF to: 00437057 (CONDITIONAL_JUMP)  ; LAB_00437057
    MOV ESP,EBP                         ; 00437075
    POP EBP                             ; 00437077
    POP EDI                             ; 00437078
    POP ESI                             ; 00437079
    POP EBX                             ; 0043707a
    RET                                 ; 0043707b
    MOV ECX,dword ptr [ESP + 0x28]      ; 0043707c
        ;   Label: LAB_0043707c
    XOR EBX,EBX                         ; 00437080
    CMP EAX,ECX                         ; 00437082
    JLE 0x0043714a                      ; 00437084
        ;   XREF to: 0043714a (CONDITIONAL_JUMP)  ; LAB_0043714a
    CMP dword ptr [EBP + 0x2c],0x0      ; 0043708a
    JNZ 0x0043710d                      ; 0043708e
        ;   XREF to: 0043710d (CONDITIONAL_JUMP)  ; LAB_0043710d
    MOV byte ptr [ESP + 0x38],DL        ; 00437094
    MOV EAX,dword ptr [ESP + 0x28]      ; 00437098
        ;   Label: LAB_00437098
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0043709c
    XOR EDX,EDX                         ; 004370a0
    SHL EAX,0x10                        ; 004370a2
    DIV ECX                             ; 004370a5
    MOV dword ptr [ESP + 0x20],EAX      ; 004370a7
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004370ab
        ;   Label: LAB_004370ab
    DEC ECX                             ; 004370af
    MOV dword ptr [ESP + 0x2c],ECX      ; 004370b0
    JZ 0x00437020                       ; 004370b4
        ;   XREF to: 00437020 (CONDITIONAL_JUMP)  ; LAB_00437020
    MOV EDX,dword ptr [ESP + 0x20]      ; 004370ba
    MOV EAX,EBX                         ; 004370be
    ADD EBX,EDX                         ; 004370c0
    AND EBX,0xffff                      ; 004370c2
    CMP EBX,EAX                         ; 004370c8
    JA 0x004370cd                       ; 004370ca
        ;   XREF to: 004370cd (CONDITIONAL_JUMP)  ; LAB_004370cd
    INC ESI                             ; 004370cc
    MOV ECX,dword ptr [ESP + 0x24]      ; 004370cd
        ;   Label: LAB_004370cd
    MOV EAX,EBX                         ; 004370d1
    MOV EDX,dword ptr [EBP + 0x2c]      ; 004370d3
    SHR EAX,0x8                         ; 004370d6
    ADD EDI,ECX                         ; 004370d9
    TEST EDX,EDX                        ; 004370db
    JNZ 0x00437116                      ; 004370dd
        ;   XREF to: 00437116 (CONDITIONAL_JUMP)  ; LAB_00437116
    MOV dword ptr [ESP + 0x8],EDX       ; 004370df
    MOV dword ptr [ESP + 0x4],EAX       ; 004370e3
    FILD qword ptr [ESP + 0x4]          ; 004370e7
    FLD1                                ; 004370eb
    XOR EAX,EAX                         ; 004370ed
    FADDP                               ; 004370ef
    MOV AL,byte ptr [ESP + 0x38]        ; 004370f1
    FMUL float ptr [ESP]                ; 004370f5
    PUSH EAX                            ; 004370f8
    FSTP float ptr [ESP + 0x10]         ; 004370f9
    PUSH dword ptr [ESP + 0x10]         ; 004370fd
    PUSH ESI                            ; 00437101
    PUSH EDI                            ; 00437102
    CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00437510 ; 00437103
        ;   XREF to: 00437510 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00437510(int x, int y, float alpha, int color)
    ADD ESP,0x10                        ; 00437108
    JMP 0x004370ab                      ; 0043710b
        ;   XREF to: 004370ab (UNCONDITIONAL_JUMP)  ; LAB_004370ab
    MOV AL,byte ptr [EBP + 0x28]        ; 0043710d
        ;   Label: LAB_0043710d
    MOV byte ptr [ESP + 0x38],AL        ; 00437110
    JMP 0x00437098                      ; 00437114
        ;   XREF to: 00437098 (UNCONDITIONAL_JUMP)  ; LAB_00437098
    XOR ECX,ECX                         ; 00437116
        ;   Label: LAB_00437116
    XOR AL,0xff                         ; 00437118
    MOV dword ptr [ESP + 0x8],ECX       ; 0043711a
    MOV dword ptr [ESP + 0x4],EAX       ; 0043711e
    XOR EAX,EAX                         ; 00437122
    FILD qword ptr [ESP + 0x4]          ; 00437124
    MOV AL,byte ptr [ESP + 0x38]        ; 00437128
    FMUL float ptr [ESP]                ; 0043712c
    PUSH EAX                            ; 0043712f
    FSTP float ptr [ESP + 0x34]         ; 00437130
    LEA EAX,[ESI + 0x1]                 ; 00437134
    PUSH dword ptr [ESP + 0x34]         ; 00437137
    PUSH EAX                            ; 0043713b
    PUSH EDI                            ; 0043713c
    CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00437510 ; 0043713d
        ;   XREF to: 00437510 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00437510(int x, int y, float alpha, int color)
    ADD ESP,0x10                        ; 00437142
    JMP 0x004370ab                      ; 00437145
        ;   XREF to: 004370ab (UNCONDITIONAL_JUMP)  ; LAB_004370ab
    CMP dword ptr [EBP + 0x2c],0x0      ; 0043714a
        ;   Label: LAB_0043714a
    JNZ 0x004371ea                      ; 0043714e
        ;   XREF to: 004371ea (CONDITIONAL_JUMP)  ; LAB_004371ea
    CMP dword ptr [ESP + 0x24],0x1      ; 00437154
    JNZ 0x004371ea                      ; 00437159
        ;   XREF to: 004371ea (CONDITIONAL_JUMP)  ; LAB_004371ea
    MOV EAX,0x1                         ; 0043715f
        ;   Label: LAB_0043715f
    MOV dword ptr [ESP + 0x18],EAX      ; 00437164
        ;   Label: LAB_00437164
    TEST EAX,EAX                        ; 00437168
    JZ 0x00437202                       ; 0043716a
        ;   XREF to: 00437202 (CONDITIONAL_JUMP)  ; LAB_00437202
    MOV byte ptr [ESP + 0x34],DL        ; 00437170
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00437174
        ;   Label: LAB_00437174
    MOV ECX,dword ptr [ESP + 0x28]      ; 00437178
    XOR EDX,EDX                         ; 0043717c
    SHL EAX,0x10                        ; 0043717e
    DIV ECX                             ; 00437181
    MOV dword ptr [ESP + 0x1c],EAX      ; 00437183
    MOV EAX,dword ptr [ESP + 0x28]      ; 00437187
        ;   Label: LAB_00437187
    DEC EAX                             ; 0043718b
    MOV dword ptr [ESP + 0x28],EAX      ; 0043718c
    JZ 0x00437020                       ; 00437190
        ;   XREF to: 00437020 (CONDITIONAL_JUMP)  ; LAB_00437020
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00437196
    MOV EAX,EBX                         ; 0043719a
    ADD EBX,ECX                         ; 0043719c
    AND EBX,0xffff                      ; 0043719e
    CMP EBX,EAX                         ; 004371a4
    JA 0x004371ac                       ; 004371a6
        ;   XREF to: 004371ac (CONDITIONAL_JUMP)  ; LAB_004371ac
    ADD EDI,dword ptr [ESP + 0x24]      ; 004371a8
    MOV EDX,dword ptr [ESP + 0x18]      ; 004371ac
        ;   Label: LAB_004371ac
    MOV EAX,EBX                         ; 004371b0
    INC ESI                             ; 004371b2
    SHR EAX,0x8                         ; 004371b3
    TEST EDX,EDX                        ; 004371b6
    JZ 0x0043720e                       ; 004371b8
        ;   XREF to: 0043720e (CONDITIONAL_JUMP)  ; LAB_0043720e
    XOR EDX,EDX                         ; 004371ba
    MOV dword ptr [ESP + 0x4],EAX       ; 004371bc
    MOV dword ptr [ESP + 0x8],EDX       ; 004371c0
    XOR EAX,EAX                         ; 004371c4
    FILD qword ptr [ESP + 0x4]          ; 004371c6
    FLD1                                ; 004371ca
    FADDP                               ; 004371cc
    MOV AL,byte ptr [ESP + 0x34]        ; 004371ce
    FMUL float ptr [ESP]                ; 004371d2
    PUSH EAX                            ; 004371d5
    FSTP float ptr [ESP + 0x14]         ; 004371d6
    PUSH dword ptr [ESP + 0x14]         ; 004371da
    PUSH ESI                            ; 004371de
    PUSH EDI                            ; 004371df
    CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00437510 ; 004371e0
        ;   XREF to: 00437510 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00437510(int x, int y, float alpha, int color)
    ADD ESP,0x10                        ; 004371e5
    JMP 0x00437187                      ; 004371e8
        ;   XREF to: 00437187 (UNCONDITIONAL_JUMP)  ; LAB_00437187
    CMP dword ptr [EBP + 0x2c],0x1      ; 004371ea
        ;   Label: LAB_004371ea
    JNZ 0x004371fb                      ; 004371ee
        ;   XREF to: 004371fb (CONDITIONAL_JUMP)  ; LAB_004371fb
    CMP dword ptr [ESP + 0x24],-0x1     ; 004371f0
    JZ 0x0043715f                       ; 004371f5
        ;   XREF to: 0043715f (CONDITIONAL_JUMP)  ; LAB_0043715f
    XOR EAX,EAX                         ; 004371fb
        ;   Label: LAB_004371fb
    JMP 0x00437164                      ; 004371fd
        ;   XREF to: 00437164 (UNCONDITIONAL_JUMP)  ; LAB_00437164
    MOV AL,byte ptr [EBP + 0x28]        ; 00437202
        ;   Label: LAB_00437202
    MOV byte ptr [ESP + 0x34],AL        ; 00437205
    JMP 0x00437174                      ; 00437209
        ;   XREF to: 00437174 (UNCONDITIONAL_JUMP)  ; LAB_00437174
    XOR AL,0xff                         ; 0043720e
        ;   Label: LAB_0043720e
    MOV dword ptr [ESP + 0x8],EDX       ; 00437210
    MOV dword ptr [ESP + 0x4],EAX       ; 00437214
    XOR EAX,EAX                         ; 00437218
    FILD qword ptr [ESP + 0x4]          ; 0043721a
    MOV AL,byte ptr [ESP + 0x34]        ; 0043721e
    FMUL float ptr [ESP]                ; 00437222
    PUSH EAX                            ; 00437225
    FSTP float ptr [ESP + 0x18]         ; 00437226
    PUSH dword ptr [ESP + 0x18]         ; 0043722a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043722e
    PUSH ESI                            ; 00437232
    ADD EAX,EDI                         ; 00437233
    PUSH EAX                            ; 00437235
    CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00437510 ; 00437236
        ;   XREF to: 00437510 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00437510(int x, int y, float alpha, int color)
    ADD ESP,0x10                        ; 0043723b
    JMP 0x00437187                      ; 0043723e
        ;   XREF to: 00437187 (UNCONDITIONAL_JUMP)  ; LAB_00437187

