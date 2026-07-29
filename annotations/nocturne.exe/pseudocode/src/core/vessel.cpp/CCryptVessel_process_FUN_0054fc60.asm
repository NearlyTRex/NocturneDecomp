; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vessel_cpp_CCryptVessel_process_FUN_0054fc60(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   double DOUBLE_0059747b = 8
;   double DOUBLE_00597483 = 16
;   float FLOAT_0059748b = -16
;   double DOUBLE_00597493 = 3.14159265350000
;   float FLOAT_0059749b = 1.700000
;   undefined4 DAT_005b7650
;   undefined4 DAT_005b80f0
;   undefined4 DAT_01cae0e8
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_0047ab70
;   core_fire.cpp_FUN_0048c0d0
;   core_flame.cpp_CFlame_process_FUN_0048d0c0
;   core_vessel.cpp_FUN_0054fc40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054fc60
        ;   Label: core_vessel.cpp_CCryptVessel_process_FUN_0054fc60
    PUSH ESI                            ; 0054fc61
    PUSH EDI                            ; 0054fc62
    PUSH EBP                            ; 0054fc63
    SUB ESP,0x38                        ; 0054fc64
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0054fc67
    MOV EDX,dword ptr [EBX + 0x3ac]     ; 0054fc6b
    CMP EDX,0x1                         ; 0054fc71
    JZ 0x0054ff0a                       ; 0054fc74
        ;   XREF to: 0054ff0a (CONDITIONAL_JUMP)  ; LAB_0054ff0a
    TEST EDX,EDX                        ; 0054fc7a
    JNZ 0x0054ff70                      ; 0054fc7c
        ;   XREF to: 0054ff70 (CONDITIONAL_JUMP)  ; LAB_0054ff70
    FLD float ptr [ESP + 0x50]          ; 0054fc82
    FMUL double ptr [0x00597493]        ; 0054fc86 | DOUBLE_00597493
    FADD float ptr [EBX + 0x658]        ; 0054fc8c
    FSTP float ptr [EBX + 0x658]        ; 0054fc92
    MOV ESI,dword ptr [EBX + 0x2cc]     ; 0054fc98
        ;   Label: LAB_0054fc98
    TEST ESI,ESI                        ; 0054fc9e
    JNZ 0x0054ff02                      ; 0054fca0
        ;   XREF to: 0054ff02 (CONDITIONAL_JUMP)  ; LAB_0054ff02
    CMP dword ptr [EBX + 0x3b8],0x0     ; 0054fca6
    JNZ 0x0054ffac                      ; 0054fcad
        ;   XREF to: 0054ffac (CONDITIONAL_JUMP)  ; LAB_0054ffac
    LEA EDI,[EBX + 0x30]                ; 0054fcb3
    MOV EBP,dword ptr [EBX + 0x3b0]     ; 0054fcb6
    LEA ESI,[EBX + 0x20]                ; 0054fcbc
    CMP EBP,0x1                         ; 0054fcbf
    JNZ 0x00550072                      ; 0054fcc2
        ;   XREF to: 00550072 (CONDITIONAL_JUMP)  ; LAB_00550072
    FLD float ptr [EBX + 0x3b4]         ; 0054fcc8
    FADD float ptr [ESP + 0x50]         ; 0054fcce
    FST float ptr [EBX + 0x3b4]         ; 0054fcd2
    FLD1                                ; 0054fcd8
    FCOMPP                              ; 0054fcda
    FNSTSW AX                           ; 0054fcdc
    SAHF                                ; 0054fcde
    JNC 0x0054ff02                      ; 0054fcdf
        ;   XREF to: 0054ff02 (CONDITIONAL_JUMP)  ; LAB_0054ff02
    MOV EDX,dword ptr [EBX + 0x2d0]     ; 0054fce5
    MOV dword ptr [EBX + 0x3b4],0x3f800000 ; 0054fceb
    TEST EDX,EDX                        ; 0054fcf5
    JNZ 0x0054ffba                      ; 0054fcf7
        ;   XREF to: 0054ffba (CONDITIONAL_JUMP)  ; LAB_0054ffba
    MOV EAX,dword ptr [EBX + 0x2d4]     ; 0054fcfd
    PUSH EAX                            ; 0054fd03
    CALL core_vessel.cpp_FUN_0054fc40   ; 0054fd04
        ;   XREF to: 0054fc40 (UNCONDITIONAL_CALL)  ; int core_vessel.cpp_FUN_0054fc40(CCryptVessel * actor)
    ADD ESP,0x4                         ; 0054fd09
    TEST EAX,EAX                        ; 0054fd0c
    JZ 0x0054fd54                       ; 0054fd0e
        ;   XREF to: 0054fd54 (CONDITIONAL_JUMP)  ; LAB_0054fd54
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 0054fd10
    MOV dword ptr [EBX + 0x3b0],0x2     ; 0054fd16
    MOV EDX,dword ptr [EAX + 0x20]      ; 0054fd20
    MOV dword ptr [ESI],EDX             ; 0054fd23
    MOV EDX,dword ptr [EAX + 0x24]      ; 0054fd25
    MOV dword ptr [ESI + 0x4],EDX       ; 0054fd28
    MOV EDX,dword ptr [EAX + 0x28]      ; 0054fd2b
    MOV dword ptr [ESI + 0x8],EDX       ; 0054fd2e
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0054fd31
    MOV dword ptr [ESI + 0xc],EAX       ; 0054fd34
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 0054fd37
    ADD EAX,0x30                        ; 0054fd3d
    CMP EDI,EAX                         ; 0054fd40
    JZ 0x0054fd54                       ; 0054fd42
        ;   XREF to: 0054fd54 (CONDITIONAL_JUMP)  ; LAB_0054fd54
    MOV EDX,dword ptr [EAX]             ; 0054fd44
    MOV dword ptr [EDI],EDX             ; 0054fd46
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054fd48
    MOV dword ptr [EDI + 0x4],EDX       ; 0054fd4b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054fd4e
    MOV dword ptr [EDI + 0x8],EDX       ; 0054fd51
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 0054fd54
        ;   Label: LAB_0054fd54
    CMP dword ptr [EAX + 0x17c],0x0     ; 0054fd5a
    JZ 0x0055018a                       ; 0054fd61
        ;   XREF to: 0055018a (CONDITIONAL_JUMP)  ; LAB_0055018a
    MOV EAX,[0x01cae0e8]                ; 0054fd67 | DAT_01cae0e8
        ;   Label: LAB_0054fd67
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0054fd6c
    LEA ESI,[EBX + 0x20]                ; 0054fd73
    FLD float ptr [EAX + 0x20]          ; 0054fd76
    FSUB float ptr [ESI]                ; 0054fd79
    FSTP float ptr [ESP]                ; 0054fd7b
    FLD float ptr [EAX + 0x24]          ; 0054fd7e
    FSUB float ptr [ESI + 0x4]          ; 0054fd81
    FST float ptr [ESP + 0x4]           ; 0054fd84
    FMUL float ptr [ESP + 0x4]          ; 0054fd88
    FLD float ptr [ESP]                 ; 0054fd8c
    FMUL ST0                            ; 0054fd8f
    FLD float ptr [EAX + 0x28]          ; 0054fd91
    FSUB float ptr [ESI + 0x8]          ; 0054fd94
    FXCH                                ; 0054fd97
    FADDP ST2,ST0                       ; 0054fd99
    FST float ptr [ESP + 0x8]           ; 0054fd9b
    FMUL float ptr [ESP + 0x8]          ; 0054fd9f
    FADDP                               ; 0054fda3
    FSQRT                               ; 0054fda5
    MOV EDI,0x4479f99a                  ; 0054fda7
    XOR EBP,EBP                         ; 0054fdac
    MOV dword ptr [ESP + 0x30],EDI      ; 0054fdae
    MOV dword ptr [ESP + 0x34],EBP      ; 0054fdb2
    MOV EAX,dword ptr [EBX + 0x2d0]     ; 0054fdb6
    FSTP float ptr [ESP + 0x2c]         ; 0054fdbc
    TEST EAX,EAX                        ; 0054fdc0
    JZ 0x0054fdfb                       ; 0054fdc2
        ;   XREF to: 0054fdfb (CONDITIONAL_JUMP)  ; LAB_0054fdfb
    FLD float ptr [ESI]                 ; 0054fdc4
    FSUB float ptr [EAX + 0x20]         ; 0054fdc6
    FSTP float ptr [ESP + 0xc]          ; 0054fdc9
    FLD float ptr [ESI + 0x4]           ; 0054fdcd
    FSUB float ptr [EAX + 0x24]         ; 0054fdd0
    FST float ptr [ESP + 0x10]          ; 0054fdd3
    FMUL float ptr [ESP + 0x10]         ; 0054fdd7
    FLD float ptr [ESP + 0xc]           ; 0054fddb
    FMUL ST0                            ; 0054fddf
    FLD float ptr [ESI + 0x8]           ; 0054fde1
    FSUB float ptr [EAX + 0x28]         ; 0054fde4
    FXCH                                ; 0054fde7
    FADDP ST2,ST0                       ; 0054fde9
    FST float ptr [ESP + 0x14]          ; 0054fdeb
    FMUL float ptr [ESP + 0x14]         ; 0054fdef
    FADDP                               ; 0054fdf3
    FSQRT                               ; 0054fdf5
    FSTP float ptr [ESP + 0x30]         ; 0054fdf7
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 0054fdfb
        ;   Label: LAB_0054fdfb
    TEST EDX,EDX                        ; 0054fe01
    JZ 0x0054fe41                       ; 0054fe03
        ;   XREF to: 0054fe41 (CONDITIONAL_JUMP)  ; LAB_0054fe41
    MOV EAX,EDX                         ; 0054fe05
    LEA ESI,[EBX + 0x20]                ; 0054fe07
    FLD float ptr [EAX + 0x20]          ; 0054fe0a
    FSUB float ptr [ESI]                ; 0054fe0d
    FSTP float ptr [ESP + 0x18]         ; 0054fe0f
    FLD float ptr [EAX + 0x24]          ; 0054fe13
    FSUB float ptr [ESI + 0x4]          ; 0054fe16
    FST float ptr [ESP + 0x1c]          ; 0054fe19
    FMUL float ptr [ESP + 0x1c]         ; 0054fe1d
    FLD float ptr [ESP + 0x18]          ; 0054fe21
    FMUL ST0                            ; 0054fe25
    FLD float ptr [EAX + 0x28]          ; 0054fe27
    FSUB float ptr [ESI + 0x8]          ; 0054fe2a
    FXCH                                ; 0054fe2d
    FADDP ST2,ST0                       ; 0054fe2f
    FST float ptr [ESP + 0x20]          ; 0054fe31
    FMUL float ptr [ESP + 0x20]         ; 0054fe35
    FADDP                               ; 0054fe39
    FSQRT                               ; 0054fe3b
    FSTP float ptr [ESP + 0x34]         ; 0054fe3d
    FLD float ptr [ESP + 0x30]          ; 0054fe41
        ;   Label: LAB_0054fe41
    FCOMP float ptr [EBX + 0x3a8]       ; 0054fe45
    FNSTSW AX                           ; 0054fe4b
    SAHF                                ; 0054fe4d
    JNC 0x0054feb8                      ; 0054fe4e
        ;   XREF to: 0054feb8 (CONDITIONAL_JUMP)  ; LAB_0054feb8
    FLD float ptr [ESP + 0x2c]          ; 0054fe50
    FCOMP float ptr [EBX + 0x3a8]       ; 0054fe54
    FNSTSW AX                           ; 0054fe5a
    SAHF                                ; 0054fe5c
    JBE 0x0054feb8                      ; 0054fe5d
        ;   XREF to: 0054feb8 (CONDITIONAL_JUMP)  ; LAB_0054feb8
    FLD float ptr [ESP + 0x34]          ; 0054fe5f
    FCOMP float ptr [EBX + 0x3a8]       ; 0054fe63
    FNSTSW AX                           ; 0054fe69
    SAHF                                ; 0054fe6b
    JBE 0x0054feb8                      ; 0054fe6c
        ;   XREF to: 0054feb8 (CONDITIONAL_JUMP)  ; LAB_0054feb8
    MOV EAX,dword ptr [EBX + 0x2d0]     ; 0054fe6e
    MOV ECX,dword ptr [EAX + 0x2cc]     ; 0054fe74
    TEST ECX,ECX                        ; 0054fe7a
    JNZ 0x0054feb8                      ; 0054fe7c
        ;   XREF to: 0054feb8 (CONDITIONAL_JUMP)  ; LAB_0054feb8
    CMP dword ptr [EAX + 0x3b0],0x0     ; 0054fe7e
    JNZ 0x0054feb8                      ; 0054fe85
        ;   XREF to: 0054feb8 (CONDITIONAL_JUMP)  ; LAB_0054feb8
    MOV dword ptr [EAX + 0x3b0],0x1     ; 0054fe87
    MOV EAX,dword ptr [EBX + 0x2d0]     ; 0054fe91
    MOV dword ptr [EAX + 0x3b4],ECX     ; 0054fe97
    MOV EAX,dword ptr [EBX + 0x2d0]     ; 0054fe9d
    ADD EAX,0x2d8                       ; 0054fea3
    PUSH EAX                            ; 0054fea8
    MOV EDI,dword ptr [0x005b7650]      ; 0054fea9 | DAT_005b7650
    PUSH EDI                            ; 0054feaf
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 0054feb0
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0047ab70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0054feb5
    MOV EBP,dword ptr [EBX + 0x2d0]     ; 0054feb8
        ;   Label: LAB_0054feb8
    TEST EBP,EBP                        ; 0054febe
    JZ 0x0054ff02                       ; 0054fec0
        ;   XREF to: 0054ff02 (CONDITIONAL_JUMP)  ; LAB_0054ff02
    CMP dword ptr [EBX + 0x2d4],0x0     ; 0054fec2
    JZ 0x0054ff02                       ; 0054fec9
        ;   XREF to: 0054ff02 (CONDITIONAL_JUMP)  ; LAB_0054ff02
    MOV EAX,dword ptr [EBX + 0x3a4]     ; 0054fecb
    CMP dword ptr [EAX + 0x17c],0x0     ; 0054fed1
    JZ 0x0054ff02                       ; 0054fed8
        ;   XREF to: 0054ff02 (CONDITIONAL_JUMP)  ; LAB_0054ff02
    MOV EAX,dword ptr [EBP + 0x3a4]     ; 0054feda
    CMP dword ptr [EAX + 0x17c],0x0     ; 0054fee0
    JZ 0x0054ff02                       ; 0054fee7
        ;   XREF to: 0054ff02 (CONDITIONAL_JUMP)  ; LAB_0054ff02
    MOV EAX,dword ptr [EBX + 0x2d4]     ; 0054fee9
    MOV EAX,dword ptr [EAX + 0x3a4]     ; 0054feef
    CMP dword ptr [EAX + 0x17c],0x0     ; 0054fef5
    JNZ 0x005501c6                      ; 0054fefc
        ;   XREF to: 005501c6 (CONDITIONAL_JUMP)  ; LAB_005501c6
    ADD ESP,0x38                        ; 0054ff02
        ;   Label: LAB_0054ff02
    POP EBP                             ; 0054ff05
    POP EDI                             ; 0054ff06
    POP ESI                             ; 0054ff07
    POP EBX                             ; 0054ff08
    RET                                 ; 0054ff09
    LEA ESI,[EBX + 0x3dc]               ; 0054ff0a
        ;   Label: LAB_0054ff0a
    LEA EAX,[EBX + 0x20]                ; 0054ff10
    MOV EDX,dword ptr [EAX]             ; 0054ff13
    MOV dword ptr [ESI],EDX             ; 0054ff15
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054ff17
    MOV dword ptr [ESI + 0x4],EDX       ; 0054ff1a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054ff1d
    MOV dword ptr [ESI + 0x8],EDX       ; 0054ff20
    MOV EAX,dword ptr [EAX + 0xc]       ; 0054ff23
    MOV dword ptr [ESI + 0xc],EAX       ; 0054ff26
    FLD float ptr [EBX + 0x3e0]         ; 0054ff29
    LEA EAX,[EBX + 0x3ec]               ; 0054ff2f
    FADD float ptr [0x0059749b]         ; 0054ff35 | FLOAT_0059749b
    LEA ESI,[EBX + 0x30]                ; 0054ff3b
    FSTP float ptr [EBX + 0x3e0]        ; 0054ff3e
    CMP EAX,ESI                         ; 0054ff44
    JZ 0x0054ff58                       ; 0054ff46
        ;   XREF to: 0054ff58 (CONDITIONAL_JUMP)  ; LAB_0054ff58
    MOV EDX,dword ptr [ESI]             ; 0054ff48
    MOV dword ptr [EAX],EDX             ; 0054ff4a
    MOV EDX,dword ptr [ESI + 0x4]       ; 0054ff4c
    MOV dword ptr [EAX + 0x4],EDX       ; 0054ff4f
    MOV EDX,dword ptr [ESI + 0x8]       ; 0054ff52
    MOV dword ptr [EAX + 0x8],EDX       ; 0054ff55
    LEA EAX,[EBX + 0x3bc]               ; 0054ff58
        ;   Label: LAB_0054ff58
    PUSH dword ptr [ESP + 0x50]         ; 0054ff5e
    PUSH EAX                            ; 0054ff62
    CALL core_flame.cpp_CFlame_process_FUN_0048d0c0 ; 0054ff63
        ;   XREF to: 0048d0c0 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_CFlame_process_FUN_0048d0c0(CFlame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0054ff68
    JMP 0x0054fc98                      ; 0054ff6b
        ;   XREF to: 0054fc98 (UNCONDITIONAL_JUMP)  ; LAB_0054fc98
    FLD float ptr [ESP + 0x50]          ; 0054ff70
        ;   Label: LAB_0054ff70
    FMUL double ptr [0x0059747b]        ; 0054ff74 | DOUBLE_0059747b
    FADD float ptr [EBX + 0x7dc]        ; 0054ff7a
    FST float ptr [EBX + 0x7dc]         ; 0054ff80
    FCOMP double ptr [0x00597483]       ; 0054ff86 | DOUBLE_00597483
    FNSTSW AX                           ; 0054ff8c
    SAHF                                ; 0054ff8e
    JC 0x0054fc98                       ; 0054ff8f
        ;   XREF to: 0054fc98 (CONDITIONAL_JUMP)  ; LAB_0054fc98
    FLD float ptr [EBX + 0x7dc]         ; 0054ff95
    FADD float ptr [0x0059748b]         ; 0054ff9b | FLOAT_0059748b
    FSTP float ptr [EBX + 0x7dc]        ; 0054ffa1
    JMP 0x0054fc98                      ; 0054ffa7
        ;   XREF to: 0054fc98 (UNCONDITIONAL_JUMP)  ; LAB_0054fc98
    MOV dword ptr [EBX + 0x3b8],ESI     ; 0054ffac
        ;   Label: LAB_0054ffac
    ADD ESP,0x38                        ; 0054ffb2
    POP EBP                             ; 0054ffb5
    POP EDI                             ; 0054ffb6
    POP ESI                             ; 0054ffb7
    POP EBX                             ; 0054ffb8
    RET                                 ; 0054ffb9
    PUSH EDX                            ; 0054ffba
        ;   Label: LAB_0054ffba
    CALL core_vessel.cpp_FUN_0054fc40   ; 0054ffbb
        ;   XREF to: 0054fc40 (UNCONDITIONAL_CALL)  ; int core_vessel.cpp_FUN_0054fc40(CCryptVessel * actor)
    ADD ESP,0x4                         ; 0054ffc0
    TEST EAX,EAX                        ; 0054ffc3
    JZ 0x0055002d                       ; 0054ffc5
        ;   XREF to: 0055002d (CONDITIONAL_JUMP)  ; LAB_0055002d
    MOV ESI,dword ptr [EBX + 0x2d4]     ; 0054ffc7
    PUSH ESI                            ; 0054ffcd
    CALL core_vessel.cpp_FUN_0054fc40   ; 0054ffce
        ;   XREF to: 0054fc40 (UNCONDITIONAL_CALL)  ; int core_vessel.cpp_FUN_0054fc40(CCryptVessel * actor)
    ADD ESP,0x4                         ; 0054ffd3
    TEST EAX,EAX                        ; 0054ffd6
    JZ 0x0055002d                       ; 0054ffd8
        ;   XREF to: 0055002d (CONDITIONAL_JUMP)  ; LAB_0055002d
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 0054ffda
        ;   Label: LAB_0054ffda
    MOV dword ptr [EBX + 0x3b0],0x2     ; 0054ffe0
    LEA ESI,[EBX + 0x20]                ; 0054ffea
    MOV EDX,dword ptr [EAX + 0x20]      ; 0054ffed
    MOV dword ptr [ESI],EDX             ; 0054fff0
    MOV EDX,dword ptr [EAX + 0x24]      ; 0054fff2
    MOV dword ptr [ESI + 0x4],EDX       ; 0054fff5
    MOV EDX,dword ptr [EAX + 0x28]      ; 0054fff8
    MOV dword ptr [ESI + 0x8],EDX       ; 0054fffb
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0054fffe
    MOV dword ptr [ESI + 0xc],EAX       ; 00550001
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 00550004
    LEA ESI,[EBX + 0x30]                ; 0055000a
    ADD EAX,0x30                        ; 0055000d
    CMP ESI,EAX                         ; 00550010
    JZ 0x0054fd54                       ; 00550012
        ;   XREF to: 0054fd54 (CONDITIONAL_JUMP)  ; LAB_0054fd54
    MOV EDX,dword ptr [EAX]             ; 00550018
    MOV dword ptr [ESI],EDX             ; 0055001a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0055001c
    MOV dword ptr [ESI + 0x4],EDX       ; 0055001f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00550022
    MOV dword ptr [ESI + 0x8],EDX       ; 00550025
    JMP 0x0054fd54                      ; 00550028
        ;   XREF to: 0054fd54 (UNCONDITIONAL_JUMP)  ; LAB_0054fd54
    MOV EDI,dword ptr [EBX + 0x2d0]     ; 0055002d
        ;   Label: LAB_0055002d
    PUSH EDI                            ; 00550033
    CALL core_vessel.cpp_FUN_0054fc40   ; 00550034
        ;   XREF to: 0054fc40 (UNCONDITIONAL_CALL)  ; int core_vessel.cpp_FUN_0054fc40(CCryptVessel * actor)
    ADD ESP,0x4                         ; 00550039
    TEST EAX,EAX                        ; 0055003c
    JZ 0x0055005a                       ; 0055003e
        ;   XREF to: 0055005a (CONDITIONAL_JUMP)  ; LAB_0055005a
    MOV dword ptr [EBX + 0x24],0x461c3f9a ; 00550040
        ;   Label: LAB_00550040
    MOV dword ptr [EBX + 0x28],0x461c3f9a ; 00550047
    MOV dword ptr [EBX + 0x20],0x461c3f9a ; 0055004e
    JMP 0x0054fd54                      ; 00550055
        ;   XREF to: 0054fd54 (UNCONDITIONAL_JUMP)  ; LAB_0054fd54
    MOV EBP,dword ptr [EBX + 0x2d4]     ; 0055005a
        ;   Label: LAB_0055005a
    PUSH EBP                            ; 00550060
    CALL core_vessel.cpp_FUN_0054fc40   ; 00550061
        ;   XREF to: 0054fc40 (UNCONDITIONAL_CALL)  ; int core_vessel.cpp_FUN_0054fc40(CCryptVessel * actor)
    ADD ESP,0x4                         ; 00550066
    TEST EAX,EAX                        ; 00550069
    JNZ 0x00550040                      ; 0055006b
        ;   XREF to: 00550040 (CONDITIONAL_JUMP)  ; LAB_00550040
    JMP 0x0054ffda                      ; 0055006d
        ;   XREF to: 0054ffda (UNCONDITIONAL_JUMP)  ; LAB_0054ffda
    CMP EBP,0x2                         ; 00550072
        ;   Label: LAB_00550072
    JNZ 0x005500ad                      ; 00550075
        ;   XREF to: 005500ad (CONDITIONAL_JUMP)  ; LAB_005500ad
    FLD float ptr [EBX + 0x3b4]         ; 00550077
    FSUB float ptr [ESP + 0x50]         ; 0055007d
    FST float ptr [EBX + 0x3b4]         ; 00550081
    FLDZ                                ; 00550087
    FCOMPP                              ; 00550089
    FNSTSW AX                           ; 0055008b
    SAHF                                ; 0055008d
    JBE 0x0054ff02                      ; 0055008e
        ;   XREF to: 0054ff02 (CONDITIONAL_JUMP)  ; LAB_0054ff02
    MOV dword ptr [EBX + 0x3b0],0x0     ; 00550094
    MOV dword ptr [EBX + 0x3b4],0x0     ; 0055009e
    JMP 0x0054fd54                      ; 005500a8
        ;   XREF to: 0054fd54 (UNCONDITIONAL_JUMP)  ; LAB_0054fd54
    CMP EBP,0x3                         ; 005500ad
        ;   Label: LAB_005500ad
    JNZ 0x0054fd54                      ; 005500b0
        ;   XREF to: 0054fd54 (CONDITIONAL_JUMP)  ; LAB_0054fd54
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 005500b6
    CMP dword ptr [EAX + 0x17c],0x0     ; 005500bc
    JNZ 0x005500d4                      ; 005500c3
        ;   XREF to: 005500d4 (CONDITIONAL_JUMP)  ; LAB_005500d4
    MOV EAX,dword ptr [EBX + 0x3a4]     ; 005500c5
    CMP dword ptr [EAX + 0x17c],0x0     ; 005500cb
    JZ 0x005500ed                       ; 005500d2
        ;   XREF to: 005500ed (CONDITIONAL_JUMP)  ; LAB_005500ed
    MOV dword ptr [EBX + 0x3b4],0x0     ; 005500d4
        ;   Label: LAB_005500d4
    MOV dword ptr [EBX + 0x3b0],0x0     ; 005500de
    JMP 0x0054fd54                      ; 005500e8
        ;   XREF to: 0054fd54 (UNCONDITIONAL_JUMP)  ; LAB_0054fd54
    FLD float ptr [EBX + 0x3b4]         ; 005500ed
        ;   Label: LAB_005500ed
    FSUB float ptr [ESP + 0x50]         ; 005500f3
    FST float ptr [EBX + 0x3b4]         ; 005500f7
    FLDZ                                ; 005500fd
    FCOMPP                              ; 005500ff
    FNSTSW AX                           ; 00550101
    SAHF                                ; 00550103
    JBE 0x0054ff02                      ; 00550104
        ;   XREF to: 0054ff02 (CONDITIONAL_JUMP)  ; LAB_0054ff02
    PUSH 0x40800000                     ; 0055010a
    PUSH 0x44bb8000                     ; 0055010f
    PUSH 0x41000000                     ; 00550114
    PUSH ESI                            ; 00550119
    MOV EAX,[0x005b80f0]                ; 0055011a | DAT_005b80f0
    PUSH EAX                            ; 0055011f
    CALL core_fire.cpp_FUN_0048c0d0     ; 00550120
        ;   XREF to: 0048c0d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0048c0d0(CFireEffect * this_ptr, CVector3f * position, float scale, float gore_multiplier, ...)
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 00550125
    MOV dword ptr [EBX + 0x3b4],0x3f800000 ; 0055012b
    MOV EDX,dword ptr [EAX + 0x20]      ; 00550135
    MOV dword ptr [ESI],EDX             ; 00550138
    MOV EDX,dword ptr [EAX + 0x24]      ; 0055013a
    MOV dword ptr [ESI + 0x4],EDX       ; 0055013d
    MOV EDX,dword ptr [EAX + 0x28]      ; 00550140
    MOV dword ptr [ESI + 0x8],EDX       ; 00550143
    MOV EAX,dword ptr [EAX + 0x2c]      ; 00550146
    MOV dword ptr [ESI + 0xc],EAX       ; 00550149
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 0055014c
    ADD EAX,0x30                        ; 00550152
    ADD ESP,0x14                        ; 00550155
    CMP EDI,EAX                         ; 00550158
    JNZ 0x0055016b                      ; 0055015a
        ;   XREF to: 0055016b (CONDITIONAL_JUMP)  ; LAB_0055016b
    MOV dword ptr [EBX + 0x3b0],0x2     ; 0055015c
    JMP 0x0054fd54                      ; 00550166
        ;   XREF to: 0054fd54 (UNCONDITIONAL_JUMP)  ; LAB_0054fd54
    MOV EDX,dword ptr [EAX]             ; 0055016b
        ;   Label: LAB_0055016b
    MOV dword ptr [EDI],EDX             ; 0055016d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0055016f
    MOV dword ptr [EDI + 0x4],EDX       ; 00550172
    MOV EDX,dword ptr [EAX + 0x8]       ; 00550175
    MOV dword ptr [EDI + 0x8],EDX       ; 00550178
    MOV dword ptr [EBX + 0x3b0],0x2     ; 0055017b
    JMP 0x0054fd54                      ; 00550185
        ;   XREF to: 0054fd54 (UNCONDITIONAL_JUMP)  ; LAB_0054fd54
    MOV EAX,dword ptr [EBX + 0x3a4]     ; 0055018a
        ;   Label: LAB_0055018a
    CMP dword ptr [EAX + 0x17c],0x0     ; 00550190
    JNZ 0x0054fd67                      ; 00550197
        ;   XREF to: 0054fd67 (CONDITIONAL_JUMP)  ; LAB_0054fd67
    CMP dword ptr [EBX + 0x3b0],0x0     ; 0055019d
    JNZ 0x0054ff02                      ; 005501a4
        ;   XREF to: 0054ff02 (CONDITIONAL_JUMP)  ; LAB_0054ff02
    MOV dword ptr [EBX + 0x3b4],0x40400000 ; 005501aa
    MOV dword ptr [EBX + 0x3b0],0x3     ; 005501b4
    ADD ESP,0x38                        ; 005501be
    POP EBP                             ; 005501c1
    POP EDI                             ; 005501c2
    POP ESI                             ; 005501c3
    POP EBX                             ; 005501c4
    RET                                 ; 005501c5
    LEA EAX,[EBX + 0x33c]               ; 005501c6
        ;   Label: LAB_005501c6
    PUSH EAX                            ; 005501cc
    MOV EDI,dword ptr [0x005b7650]      ; 005501cd | DAT_005b7650
    PUSH EDI                            ; 005501d3
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 005501d4
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0047ab70(CEventList * this_ptr, char * commands)
    MOV EAX,dword ptr [EBX + 0x2d0]     ; 005501d9
    MOV dword ptr [EAX + 0x7e0],0x1     ; 005501df
    MOV EAX,dword ptr [EBX + 0x2d4]     ; 005501e9
    MOV dword ptr [EAX + 0x7e0],0x1     ; 005501ef
    ADD ESP,0x8                         ; 005501f9
    MOV dword ptr [EBX + 0x7e0],0x1     ; 005501fc
    ADD ESP,0x38                        ; 00550206
    POP EBP                             ; 00550209
    POP EDI                             ; 0055020a
    POP ESI                             ; 0055020b
    POP EBX                             ; 0055020c
    RET                                 ; 0055020d

