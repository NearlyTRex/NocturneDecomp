; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00423fb0(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004221c0 at 0042252f
;   FUN_00422570 at 004227ef
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423fb0
        ;   Label: FUN_00423fb0
    PUSH ESI                            ; 00423fb1
    PUSH EDI                            ; 00423fb2
    PUSH EBP                            ; 00423fb3
    SUB ESP,0x18                        ; 00423fb4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00423fb7
    MOV EDX,dword ptr [ESP + 0x30]      ; 00423fbb
    FLD float ptr [EDX]                 ; 00423fbf
    FLD float ptr [EDX + 0x4]           ; 00423fc1
    FLD float ptr [EDX + 0x8]           ; 00423fc4
    LEA EAX,[EBP + 0x20]                ; 00423fc7
    LEA EDI,[ESP + 0xc]                 ; 00423fca
    MOV ESI,ESP                         ; 00423fce
    FXCH ST2                            ; 00423fd0
    FSUB float ptr [EAX]                ; 00423fd2
    FXCH                                ; 00423fd4
    FSUB float ptr [EAX + 0x4]          ; 00423fd6
    FXCH ST2                            ; 00423fd9
    FSUB float ptr [EAX + 0x8]          ; 00423fdb
    FXCH                                ; 00423fde
    FSTP float ptr [ESP]                ; 00423fe0
    FXCH                                ; 00423fe3
    FSTP float ptr [ESP + 0x4]          ; 00423fe5
    FSTP float ptr [ESP + 0x8]          ; 00423fe9
    MOVSD ES:EDI,ESI                    ; 00423fed
    MOVSD ES:EDI,ESI                    ; 00423fee
    MOVSD ES:EDI,ESI                    ; 00423fef
    MOV ECX,dword ptr [EDX]             ; 00423ff0
    MOV dword ptr [EAX],ECX             ; 00423ff2
    MOV ECX,dword ptr [EDX + 0x4]       ; 00423ff4
    MOV dword ptr [EAX + 0x4],ECX       ; 00423ff7
    MOV ECX,dword ptr [EDX + 0x8]       ; 00423ffa
    MOV dword ptr [EAX + 0x8],ECX       ; 00423ffd
    MOV EDX,dword ptr [EBP + 0xd058]    ; 00424000
    XOR ECX,ECX                         ; 00424006
    TEST EDX,EDX                        ; 00424008
    JLE 0x00424070                      ; 0042400a
        ;   XREF to: 00424070 (CONDITIONAL_JUMP)  ; LAB_00424070
    LEA EAX,[EBP + 0xd064]              ; 0042400c
    FLD float ptr [EAX]                 ; 00424012
        ;   Label: LAB_00424012
    FLD float ptr [EAX + 0x4]           ; 00424014
    FLD float ptr [EAX + 0x8]           ; 00424017
    FLD float ptr [EAX + 0x18]          ; 0042401a
    FLD float ptr [EAX + 0x1c]          ; 0042401d
    FLD float ptr [EAX + 0x20]          ; 00424020
    INC ECX                             ; 00424023
    FXCH ST5                            ; 00424024
    FSUB float ptr [ESP + 0xc]          ; 00424026
    FXCH ST4                            ; 0042402a
    FSUB float ptr [ESP + 0x10]         ; 0042402c
    FXCH ST3                            ; 00424030
    FSUB float ptr [ESP + 0x14]         ; 00424032
    FXCH ST2                            ; 00424036
    FSUB float ptr [ESP + 0xc]          ; 00424038
    FXCH                                ; 0042403c
    FSUB float ptr [ESP + 0x10]         ; 0042403e
    FXCH ST5                            ; 00424042
    FSUB float ptr [ESP + 0x14]         ; 00424044
    FXCH ST4                            ; 00424048
    FSTP float ptr [EAX]                ; 0042404a
    FXCH ST2                            ; 0042404c
    FSTP float ptr [EAX + 0x4]          ; 0042404e
    FSTP float ptr [EAX + 0x8]          ; 00424051
    FSTP float ptr [EAX + 0x18]         ; 00424054
    FXCH                                ; 00424057
    FSTP float ptr [EAX + 0x1c]         ; 00424059
    FSTP float ptr [EAX + 0x20]         ; 0042405c
    MOV EBX,dword ptr [EBP + 0xd058]    ; 0042405f
    ADD EAX,0x40                        ; 00424065
    CMP ECX,EBX                         ; 00424068
    JL 0x00424012                       ; 0042406a
        ;   XREF to: 00424012 (CONDITIONAL_JUMP)  ; LAB_00424012
    LEA EAX,[EAX]                       ; 0042406c
    LEA EAX,[EBP + 0x1be68]             ; 00424070
        ;   Label: LAB_00424070
    FLD float ptr [EAX]                 ; 00424076
    FLD float ptr [EAX + 0x4]           ; 00424078
    FLD float ptr [EAX + 0x8]           ; 0042407b
    FXCH ST2                            ; 0042407e
    FSUB float ptr [ESP + 0xc]          ; 00424080
    FXCH                                ; 00424084
    FSUB float ptr [ESP + 0x10]         ; 00424086
    FXCH ST2                            ; 0042408a
    FSUB float ptr [ESP + 0x14]         ; 0042408c
    FXCH                                ; 00424090
    FSTP float ptr [EAX]                ; 00424092
    FXCH                                ; 00424094
    FSTP float ptr [EAX + 0x4]          ; 00424096
    FSTP float ptr [EAX + 0x8]          ; 00424099
    LEA EAX,[EBP + 0x1be74]             ; 0042409c
    XOR ECX,ECX                         ; 004240a2
    FLD float ptr [EAX]                 ; 004240a4
    FLD float ptr [EAX + 0x4]           ; 004240a6
    FLD float ptr [EAX + 0x8]           ; 004240a9
    LEA EBX,[EBP + 0x30]                ; 004240ac
    FXCH ST2                            ; 004240af
    FSUB float ptr [ESP + 0xc]          ; 004240b1
    FXCH                                ; 004240b5
    FSUB float ptr [ESP + 0x10]         ; 004240b7
    FXCH ST2                            ; 004240bb
    FSUB float ptr [ESP + 0x14]         ; 004240bd
    FXCH                                ; 004240c1
    FSTP float ptr [EAX]                ; 004240c3
    FXCH                                ; 004240c5
    FSTP float ptr [EAX + 0x4]          ; 004240c7
    FSTP float ptr [EAX + 0x8]          ; 004240ca
    IMUL EAX,ECX,0x30                   ; 004240cd
        ;   Label: LAB_004240cd
    MOV EDX,EBX                         ; 004240d0
    ADD EAX,EBP                         ; 004240d2
    FLD float ptr [ESP + 0x10]          ; 004240d4
    FLD float ptr [EAX + 0x135dc]       ; 004240d8
        ;   Label: LAB_004240d8
    FSUB ST0,ST1                        ; 004240de
    ADD EAX,0x4                         ; 004240e0
    FSTP float ptr [EAX + 0x135d8]      ; 004240e3
    CMP EAX,EDX                         ; 004240e9
    JNZ 0x004240d8                      ; 004240eb
        ;   XREF to: 004240d8 (CONDITIONAL_JUMP)  ; LAB_004240d8
    FSTP ST0                            ; 004240ed
    INC ECX                             ; 004240ef
    ADD EBX,0x30                        ; 004240f0
    CMP ECX,0xc                         ; 004240f3
    JL 0x004240cd                       ; 004240f6
        ;   XREF to: 004240cd (CONDITIONAL_JUMP)  ; LAB_004240cd
    ADD ESP,0x18                        ; 004240f8
    POP EBP                             ; 004240fb
    POP EDI                             ; 004240fc
    POP ESI                             ; 004240fd
    POP EBX                             ; 004240fe
    RET                                 ; 004240ff

