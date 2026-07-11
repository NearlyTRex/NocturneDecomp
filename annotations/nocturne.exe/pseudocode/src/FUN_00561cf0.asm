; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00561cf0(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_00561cd0 = 00561d2d
;   string s_limb?.wav_0059891a
;   undefined4 DAT_00598926
;   undefined4 DAT_0059892e
;   undefined4 DAT_00598936
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77600
;   undefined4 DAT_01c777cc
;
; Called Functions:
;   FUN_0040dea0
;   FUN_00415b30
;   FUN_00416d40
;   FUN_00427e40
;   FUN_00427eb0
;   FUN_0042b490
;   FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561cf0
        ;   Label: FUN_00561cf0
    PUSH ESI                            ; 00561cf1
    PUSH EDI                            ; 00561cf2
    PUSH EBP                            ; 00561cf3
    SUB ESP,0xc                         ; 00561cf4
    MOV EBX,dword ptr [ESP + 0x20]      ; 00561cf7
    MOV ESI,dword ptr [ESP + 0x24]      ; 00561cfb
    FLD float ptr [ESI + 0x2c]          ; 00561cff
    FLDZ                                ; 00561d02
    FCOMPP                              ; 00561d04
    FNSTSW AX                           ; 00561d06
    SAHF                                ; 00561d08
    JNC 0x00561d35                      ; 00561d09
        ;   XREF to: 00561d35 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 00561d0b
    JNZ 0x00561d35                      ; 00561d0e
        ;   XREF to: 00561d35 (CONDITIONAL_JUMP)  ; default
    CALL FUN_0056488c                   ; 00561d10
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined FUN_0056488c()
    MOV EDX,EAX                         ; 00561d15
    MOV EDI,0x6                         ; 00561d17
    SAR EDX,0x1f                        ; 00561d1c
    IDIV EDI                            ; 00561d1f
    CMP EDX,0x5                         ; 00561d21
    JA 0x00561d35                       ; 00561d24
        ;   XREF to: 00561d35 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x561cd0]  ; 00561d26 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbde0]    ; 00561d2d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 00561d33
        ;   Label: LAB_00561d33
    MOV ECX,dword ptr [EBX + 0xbde0]    ; 00561d35
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 00561d3b
    CMP EAX,ECX                         ; 00561d3d
    JNZ 0x00561f32                      ; 00561d3f
        ;   XREF to: 00561f32 (CONDITIONAL_JUMP)  ; LAB_00561f32
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00561d45
        ;   Label: LAB_00561d45
    MOV EBP,dword ptr [EBX + 0xbdf8]    ; 00561d48
    MOV dword ptr [ESP + 0x8],EAX       ; 00561d4e
    CMP EBP,dword ptr [ESI]             ; 00561d52
    JNZ 0x00561d5e                      ; 00561d54
        ;   XREF to: 00561d5e (CONDITIONAL_JUMP)  ; LAB_00561d5e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 00561d56
    MOV EDX,dword ptr [EBX + 0xbdf4]    ; 00561d5e
        ;   Label: LAB_00561d5e
    CMP EDX,dword ptr [ESI]             ; 00561d64
    JNZ 0x00561d70                      ; 00561d66
        ;   XREF to: 00561d70 (CONDITIONAL_JUMP)  ; LAB_00561d70
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 00561d68
    MOV EAX,[0x005b9354]                ; 00561d70 | DAT_005b9354
        ;   Label: LAB_00561d70
    CMP dword ptr [EAX + 0x1e0],0x0     ; 00561d75 | DAT_01c777cc
    JZ 0x00561d86                       ; 00561d7c
        ;   XREF to: 00561d86 (CONDITIONAL_JUMP)  ; LAB_00561d86
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 00561d7e
    MOV EAX,[0x005b9354]                ; 00561d86 | DAT_005b9354
        ;   Label: LAB_00561d86
    MOV EDX,dword ptr [EAX + 0x14]      ; 00561d8b | DAT_01c77600
    TEST EDX,EDX                        ; 00561d8e
    JNZ 0x00561d96                      ; 00561d90
        ;   XREF to: 00561d96 (CONDITIONAL_JUMP)  ; LAB_00561d96
    MOV dword ptr [ESP + 0x8],EDX       ; 00561d92
    PUSH dword ptr [ESP + 0x8]          ; 00561d96
        ;   Label: LAB_00561d96
    CALL FUN_0040dea0                   ; 00561d9a
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dea0()
    ADD ESP,0x4                         ; 00561d9f
    TEST EAX,EAX                        ; 00561da2
    JZ 0x00561ec9                       ; 00561da4
        ;   XREF to: 00561ec9 (CONDITIONAL_JUMP)  ; LAB_00561ec9
    PUSH 0x0                            ; 00561daa
    PUSH 0x0                            ; 00561dac
    PUSH 0x0                            ; 00561dae
    PUSH EBX                            ; 00561db0
    LEA EAX,[ESI + 0xc]                 ; 00561db1
    PUSH EAX                            ; 00561db4
    LEA EAX,[EBX + 0x30]                ; 00561db5
    PUSH EAX                            ; 00561db8
    LEA EAX,[EBX + 0x20]                ; 00561db9
    PUSH EAX                            ; 00561dbc
    CALL FUN_00415b30                   ; 00561dbd
        ;   XREF to: 00415b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00415b30()
    ADD ESP,0x1c                        ; 00561dc2
    MOV EDI,EAX                         ; 00561dc5
    PUSH 0x0                            ; 00561dc7
    MOV EBP,EAX                         ; 00561dc9
    MOV EAX,dword ptr [ESI]             ; 00561dcb
    PUSH EAX                            ; 00561dcd
    PUSH EDI                            ; 00561dce
    PUSH EBX                            ; 00561dcf
    CALL FUN_00427eb0                   ; 00561dd0
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427eb0()
    MOV EAX,dword ptr [ESI]             ; 00561dd5
    MOV EDX,dword ptr [EBX + 0xbde0]    ; 00561dd7
    ADD ESP,0x10                        ; 00561ddd
    CMP EAX,EDX                         ; 00561de0
    JNZ 0x00561df7                      ; 00561de2
        ;   XREF to: 00561df7 (CONDITIONAL_JUMP)  ; LAB_00561df7
    PUSH 0x0                            ; 00561de4
    MOV ECX,dword ptr [EBX + 0xbde4]    ; 00561de6
    PUSH ECX                            ; 00561dec
    PUSH EDI                            ; 00561ded
    PUSH EBX                            ; 00561dee
    CALL FUN_00427eb0                   ; 00561def
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427eb0()
    ADD ESP,0x10                        ; 00561df4
    MOV EDI,dword ptr [EBX + 0xbde8]    ; 00561df7
        ;   Label: LAB_00561df7
    CMP EDI,dword ptr [ESI]             ; 00561dfd
    JNZ 0x00561e14                      ; 00561dff
        ;   XREF to: 00561e14 (CONDITIONAL_JUMP)  ; LAB_00561e14
    PUSH 0x0                            ; 00561e01
    MOV EAX,dword ptr [EBX + 0xbdec]    ; 00561e03
    PUSH EAX                            ; 00561e09
    PUSH EBP                            ; 00561e0a
    PUSH EBX                            ; 00561e0b
    CALL FUN_00427eb0                   ; 00561e0c
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427eb0()
    ADD ESP,0x10                        ; 00561e11
    MOV EDX,dword ptr [EBX + 0xbdf4]    ; 00561e14
        ;   Label: LAB_00561e14
    CMP EDX,dword ptr [ESI]             ; 00561e1a
    JNZ 0x00561e80                      ; 00561e1c
        ;   XREF to: 00561e80 (CONDITIONAL_JUMP)  ; LAB_00561e80
    PUSH 0x0                            ; 00561e1e
    LEA EDI,[ESI + 0xc]                 ; 00561e20
    PUSH EDI                            ; 00561e23
    MOV ECX,dword ptr [EBX + 0xbde8]    ; 00561e24
    PUSH ECX                            ; 00561e2a
    PUSH EBX                            ; 00561e2b
    CALL FUN_00427e40                   ; 00561e2c
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 00561e31
    PUSH 0x0                            ; 00561e34
    PUSH EDI                            ; 00561e36
    MOV EAX,dword ptr [EBX + 0xbdec]    ; 00561e37
    PUSH EAX                            ; 00561e3d
    PUSH EBX                            ; 00561e3e
    CALL FUN_00427e40                   ; 00561e3f
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 00561e44
    PUSH 0x0                            ; 00561e47
    PUSH EDI                            ; 00561e49
    MOV EDX,dword ptr [EBX + 0xbde0]    ; 00561e4a
    PUSH EDX                            ; 00561e50
    PUSH EBX                            ; 00561e51
    CALL FUN_00427e40                   ; 00561e52
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 00561e57
    PUSH 0x0                            ; 00561e5a
    PUSH EDI                            ; 00561e5c
    MOV ECX,dword ptr [EBX + 0xbde4]    ; 00561e5d
    PUSH ECX                            ; 00561e63
    PUSH EBX                            ; 00561e64
    CALL FUN_00427e40                   ; 00561e65
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 00561e6a
    PUSH 0x0                            ; 00561e6d
    PUSH EDI                            ; 00561e6f
    MOV EDI,dword ptr [EBX + 0xbdf8]    ; 00561e70
    PUSH EDI                            ; 00561e76
    PUSH EBX                            ; 00561e77
    CALL FUN_00427e40                   ; 00561e78
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 00561e7d
    PUSH 0x59891a                       ; 00561e80 | = "limb?.wav"
        ;   Label: LAB_00561e80
    PUSH EBX                            ; 00561e85
    CALL FUN_0042b490                   ; 00561e86
        ;   XREF to: 0042b490 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b490()
    ADD ESP,0x8                         ; 00561e8b
    PUSH EBP                            ; 00561e8e
    CALL FUN_00416d40                   ; 00561e8f
        ;   XREF to: 00416d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00416d40()
    MOV EAX,dword ptr [EBX + 0xbdf8]    ; 00561e94
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2290] ; 00561e9a
    ADD ESP,0x4                         ; 00561ea1
    TEST EBP,EBP                        ; 00561ea4
    JZ 0x00561f73                       ; 00561ea6
        ;   XREF to: 00561f73 (CONDITIONAL_JUMP)  ; LAB_00561f73
    FLD float ptr [ESI + 0x8]           ; 00561eac
        ;   Label: LAB_00561eac
    FLD ST0                             ; 00561eaf
    FMUL double ptr [0x00598926]        ; 00561eb1 | DAT_00598926
    FSTP ST1                            ; 00561eb7
    FSTP float ptr [ESI + 0x8]          ; 00561eb9
    CMP dword ptr [EBX + 0xbdf0],0x0    ; 00561ebc
    JL 0x00561f7f                       ; 00561ec3
        ;   XREF to: 00561f7f (CONDITIONAL_JUMP)  ; LAB_00561f7f
    MOV EDX,dword ptr [EBX + 0xbdf8]    ; 00561ec9
        ;   Label: LAB_00561ec9
    MOV EAX,dword ptr [ESI]             ; 00561ecf
    CMP EAX,EDX                         ; 00561ed1
    JZ 0x00561f8b                       ; 00561ed3
        ;   XREF to: 00561f8b (CONDITIONAL_JUMP)  ; LAB_00561f8b
    CMP EAX,dword ptr [EBX + 0xbdf0]    ; 00561ed9
    JZ 0x00561eed                       ; 00561edf
        ;   XREF to: 00561eed (CONDITIONAL_JUMP)  ; LAB_00561eed
    CMP EAX,dword ptr [EBX + 0xbdf4]    ; 00561ee1
    JNZ 0x00561fa3                      ; 00561ee7
        ;   XREF to: 00561fa3 (CONDITIONAL_JUMP)  ; LAB_00561fa3
    MOV EAX,dword ptr [ESI + 0x4]       ; 00561eed
        ;   Label: LAB_00561eed
    MOV dword ptr [ESI + 0x4],EAX       ; 00561ef0
    ADD ESP,0xc                         ; 00561ef3
    POP EBP                             ; 00561ef6
    POP EDI                             ; 00561ef7
    POP ESI                             ; 00561ef8
    POP EBX                             ; 00561ef9
    RET                                 ; 00561efa
    MOV EAX,dword ptr [EBX + 0xbde4]    ; 00561efb
        ;   Label: caseD_1
    JMP 0x00561d33                      ; 00561f01
        ;   XREF to: 00561d33 (UNCONDITIONAL_JUMP)  ; LAB_00561d33
    MOV EAX,dword ptr [EBX + 0xbde8]    ; 00561f06
        ;   Label: caseD_2
    JMP 0x00561d33                      ; 00561f0c
        ;   XREF to: 00561d33 (UNCONDITIONAL_JUMP)  ; LAB_00561d33
    MOV EAX,dword ptr [EBX + 0xbdec]    ; 00561f11
        ;   Label: caseD_3
    JMP 0x00561d33                      ; 00561f17
        ;   XREF to: 00561d33 (UNCONDITIONAL_JUMP)  ; LAB_00561d33
    MOV EAX,dword ptr [EBX + 0xbdf8]    ; 00561f1c
        ;   Label: caseD_4
    JMP 0x00561d33                      ; 00561f22
        ;   XREF to: 00561d33 (UNCONDITIONAL_JUMP)  ; LAB_00561d33
    MOV EAX,dword ptr [EBX + 0xbdf4]    ; 00561f27
        ;   Label: caseD_5
    JMP 0x00561d33                      ; 00561f2d
        ;   XREF to: 00561d33 (UNCONDITIONAL_JUMP)  ; LAB_00561d33
    CMP EAX,dword ptr [EBX + 0xbde4]    ; 00561f32
        ;   Label: LAB_00561f32
    JZ 0x00561d45                       ; 00561f38
        ;   XREF to: 00561d45 (CONDITIONAL_JUMP)  ; LAB_00561d45
    CMP EAX,dword ptr [EBX + 0xbde8]    ; 00561f3e
    JZ 0x00561d45                       ; 00561f44
        ;   XREF to: 00561d45 (CONDITIONAL_JUMP)  ; LAB_00561d45
    CMP EAX,dword ptr [EBX + 0xbdec]    ; 00561f4a
    JZ 0x00561d45                       ; 00561f50
        ;   XREF to: 00561d45 (CONDITIONAL_JUMP)  ; LAB_00561d45
    CMP EAX,dword ptr [EBX + 0xbdf4]    ; 00561f56
    JZ 0x00561d45                       ; 00561f5c
        ;   XREF to: 00561d45 (CONDITIONAL_JUMP)  ; LAB_00561d45
    CMP EAX,dword ptr [EBX + 0xbdf8]    ; 00561f62
    JZ 0x00561d45                       ; 00561f68
        ;   XREF to: 00561d45 (CONDITIONAL_JUMP)  ; LAB_00561d45
    JMP 0x00561ec9                      ; 00561f6e
        ;   XREF to: 00561ec9 (UNCONDITIONAL_JUMP)  ; LAB_00561ec9
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00561f73
        ;   Label: LAB_00561f73
    JMP 0x00561eac                      ; 00561f7a
        ;   XREF to: 00561eac (UNCONDITIONAL_JUMP)  ; LAB_00561eac
    MOV dword ptr [ESI + 0x4],0x4479c000 ; 00561f7f
        ;   Label: LAB_00561f7f
    JMP 0x00561ec9                      ; 00561f86
        ;   XREF to: 00561ec9 (UNCONDITIONAL_JUMP)  ; LAB_00561ec9
    FLD float ptr [ESI + 0x4]           ; 00561f8b
        ;   Label: LAB_00561f8b
    FLD ST0                             ; 00561f8e
    FMUL double ptr [0x00598936]        ; 00561f90 | DAT_00598936
    FSTP ST1                            ; 00561f96
    FSTP float ptr [ESI + 0x4]          ; 00561f98
    ADD ESP,0xc                         ; 00561f9b
    POP EBP                             ; 00561f9e
    POP EDI                             ; 00561f9f
    POP ESI                             ; 00561fa0
    POP EBX                             ; 00561fa1
    RET                                 ; 00561fa2
    FLD float ptr [ESI + 0x4]           ; 00561fa3
        ;   Label: LAB_00561fa3
    FLD ST0                             ; 00561fa6
    FMUL double ptr [0x0059892e]        ; 00561fa8 | DAT_0059892e
    FSTP ST1                            ; 00561fae
    FSTP float ptr [ESI + 0x4]          ; 00561fb0
    ADD ESP,0xc                         ; 00561fb3
    POP EBP                             ; 00561fb6
    POP EDI                             ; 00561fb7
    POP ESI                             ; 00561fb8
    POP EBX                             ; 00561fb9
    RET                                 ; 00561fba

