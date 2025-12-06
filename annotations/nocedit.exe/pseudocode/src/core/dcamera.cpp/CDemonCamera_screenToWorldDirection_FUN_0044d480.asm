; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480(CDemonCamera * this_ptr, CVector3f * output_ptr, int screen_x, int screen_y)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_ptr
; int              Stack[0xc]:4   screen_x
; int              Stack[0x10]:4   screen_y
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_msnedit.cpp_FUN_0053c340 at 0053c3a5
;   core_setedit.cpp_CDemonSet_FUN_00583170 at 00583fa6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d480
        ;   Label: core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
    PUSH ESI                            ; 0044d481
    PUSH EDI                            ; 0044d482
    PUSH EBP                            ; 0044d483
    MOV EBP,ESP                         ; 0044d484
    SUB ESP,0x14                        ; 0044d486
    AND ESP,0xfffffff8                  ; 0044d489
    MOV EDX,0x10000                     ; 0044d48c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0044d491
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0044d494
    MOV ESI,dword ptr [EBP + 0x14]      ; 0044d497
    MOV dword ptr [ESP + 0xc],EDX       ; 0044d49a
    SHL EAX,0x10                        ; 0044d49e
    MOV ECX,dword ptr [ESI + 0x1c8]     ; 0044d4a1
    MOV EBX,dword ptr [EBX + 0x1c0]     ; 0044d4a7
    SUB EAX,ECX                         ; 0044d4ad
    IMUL EDX                            ; 0044d4af
    IDIV EBX                            ; 0044d4b1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044d4b3
    MOV dword ptr [ESP + 0x4],EAX       ; 0044d4b7
    MOV EAX,dword ptr [EBP + 0x20]      ; 0044d4bb
    MOV EDI,dword ptr [ESI + 0x1cc]     ; 0044d4be
    SHL EAX,0x10                        ; 0044d4c4
    MOV EBX,dword ptr [ESI + 0x1c4]     ; 0044d4c7
    SUB EAX,EDI                         ; 0044d4cd
    LEA EDI,[ESI + 0x19c]               ; 0044d4cf
    IMUL EDX                            ; 0044d4d5
    IDIV EBX                            ; 0044d4d7
    LEA ESI,[ESP + 0x4]                 ; 0044d4d9
    MOV dword ptr [ESP + 0x8],EAX       ; 0044d4dd
    MOV EAX,dword ptr [ESI]             ; 0044d4e1
    IMUL dword ptr [EDI]                ; 0044d4e3
    MOV EBX,EAX                         ; 0044d4e5
    MOV ECX,EDX                         ; 0044d4e7
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044d4e9
    IMUL dword ptr [EDI + 0xc]          ; 0044d4ec
    ADD EBX,EAX                         ; 0044d4ef
    ADC ECX,EDX                         ; 0044d4f1
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044d4f3
    IMUL dword ptr [EDI + 0x18]         ; 0044d4f6
    ADD EAX,EBX                         ; 0044d4f9
    ADC EDX,ECX                         ; 0044d4fb
    SHRD EAX,EDX,0x10                   ; 0044d4fd
    MOV EDI,dword ptr [EBP + 0x14]      ; 0044d501
    LEA ESI,[ESP + 0x4]                 ; 0044d504
    MOV dword ptr [ESP + 0x10],EAX      ; 0044d508
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044d50c
    FILD dword ptr [ESP + 0x10]         ; 0044d50f
    ADD EDI,0x1a0                       ; 0044d513
    FSTP float ptr [EAX]                ; 0044d519
    MOV EAX,dword ptr [ESI]             ; 0044d51b
    IMUL dword ptr [EDI]                ; 0044d51d
    MOV EBX,EAX                         ; 0044d51f
    MOV ECX,EDX                         ; 0044d521
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044d523
    IMUL dword ptr [EDI + 0xc]          ; 0044d526
    ADD EBX,EAX                         ; 0044d529
    ADC ECX,EDX                         ; 0044d52b
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044d52d
    IMUL dword ptr [EDI + 0x18]         ; 0044d530
    ADD EAX,EBX                         ; 0044d533
    ADC EDX,ECX                         ; 0044d535
    SHRD EAX,EDX,0x10                   ; 0044d537
    MOV EDI,dword ptr [EBP + 0x14]      ; 0044d53b
    LEA ESI,[ESP + 0x4]                 ; 0044d53e
    MOV dword ptr [ESP + 0x10],EAX      ; 0044d542
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044d546
    FILD dword ptr [ESP + 0x10]         ; 0044d549
    ADD EDI,0x1a4                       ; 0044d54d
    FSTP float ptr [EAX + 0x4]          ; 0044d553
    MOV EAX,dword ptr [ESI]             ; 0044d556
    IMUL dword ptr [EDI]                ; 0044d558
    MOV EBX,EAX                         ; 0044d55a
    MOV ECX,EDX                         ; 0044d55c
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044d55e
    IMUL dword ptr [EDI + 0xc]          ; 0044d561
    ADD EBX,EAX                         ; 0044d564
    ADC ECX,EDX                         ; 0044d566
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044d568
    IMUL dword ptr [EDI + 0x18]         ; 0044d56b
    ADD EAX,EBX                         ; 0044d56e
    ADC EDX,ECX                         ; 0044d570
    SHRD EAX,EDX,0x10                   ; 0044d572
    MOV dword ptr [ESP + 0x10],EAX      ; 0044d576
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044d57a
    FLD float ptr [EAX + 0x4]           ; 0044d57d
    FMUL ST0                            ; 0044d580
    FLD float ptr [EAX]                 ; 0044d582
    FMUL ST0                            ; 0044d584
    FILD dword ptr [ESP + 0x10]         ; 0044d586
    FXCH                                ; 0044d58a
    FADDP ST2,ST0                       ; 0044d58c
    FST float ptr [EAX + 0x8]           ; 0044d58e
    FMUL float ptr [EAX + 0x8]          ; 0044d591
    FADDP                               ; 0044d594
    FSQRT                               ; 0044d596
    FST float ptr [ESP]                 ; 0044d598
    FLDZ                                ; 0044d59b
    FCOMPP                              ; 0044d59d
    FNSTSW AX                           ; 0044d59f
    SAHF                                ; 0044d5a1
    JNC 0x0044d5d2                      ; 0044d5a2 | LAB_0044d5d2
        ;   XREF to: 0044d5d2 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044d5a4
    FLD1                                ; 0044d5a7
    FLD float ptr [EAX]                 ; 0044d5a9
    FXCH                                ; 0044d5ab
    FDIV float ptr [ESP]                ; 0044d5ad
    FXCH                                ; 0044d5b0
    FMUL ST1                            ; 0044d5b2
    FLD float ptr [EAX + 0x4]           ; 0044d5b4
    FMUL ST2                            ; 0044d5b7
    FLD float ptr [EAX + 0x8]           ; 0044d5b9
    FMULP ST3                           ; 0044d5bc
    FXCH                                ; 0044d5be
    FSTP float ptr [EAX]                ; 0044d5c0
    FSTP float ptr [EAX + 0x4]          ; 0044d5c2
    FSTP float ptr [EAX + 0x8]          ; 0044d5c5
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044d5c8
    MOV ESP,EBP                         ; 0044d5cb
    POP EBP                             ; 0044d5cd
    POP EDI                             ; 0044d5ce
    POP ESI                             ; 0044d5cf
    POP EBX                             ; 0044d5d0
    RET                                 ; 0044d5d1
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044d5d2
        ;   Label: LAB_0044d5d2
    MOV dword ptr [EAX + 0x8],0x0       ; 0044d5d5
    MOV EDX,dword ptr [EAX + 0x8]       ; 0044d5dc
    MOV dword ptr [EAX + 0x4],EDX       ; 0044d5df
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044d5e2
    MOV dword ptr [EAX],EDX             ; 0044d5e5
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044d5e7
    MOV ESP,EBP                         ; 0044d5ea
    POP EBP                             ; 0044d5ec
    POP EDI                             ; 0044d5ed
    POP ESI                             ; 0044d5ee
    POP EBX                             ; 0044d5ef
    RET                                 ; 0044d5f0

