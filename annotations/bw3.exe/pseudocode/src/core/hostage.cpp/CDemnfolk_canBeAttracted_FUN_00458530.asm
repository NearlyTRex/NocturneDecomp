; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hostage_cpp_CDemnfolk_canBeAttracted_FUN_00458530(CDemnfolk *this_ptr,CDemonActor *grabber)
;
; Parameters:
; CDemnfolk *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
;
; Referenced Globals:
;   undefined4 DAT_005ba8de
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_motion.cpp_FUN_004fc350
;   core_skeleton.cpp_FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458530
        ;   Label: core_hostage.cpp_CDemnfolk_canBeAttracted_FUN_00458530
    PUSH EBP                            ; 00458531
    SUB ESP,0x7c                        ; 00458532
    MOV EBP,dword ptr [ESP + 0x88]      ; 00458535
    PUSH 0xd                            ; 0045853c
    LEA EBX,[EBP + 0x158]               ; 0045853e
    PUSH EBX                            ; 00458544
    CALL core_motion.cpp_FUN_004fc350   ; 00458545
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x80],EAX      ; 0045854a
    FLD float ptr [ESP + 0x80]          ; 00458551
    FLDZ                                ; 00458558
    ADD ESP,0x8                         ; 0045855a
    FCOMPP                              ; 0045855d
    FNSTSW AX                           ; 0045855f
    SAHF                                ; 00458561
    JC 0x0045856c                       ; 00458562
        ;   XREF to: 0045856c (CONDITIONAL_JUMP)  ; LAB_0045856c
    XOR EAX,EAX                         ; 00458564
    ADD ESP,0x7c                        ; 00458566
    POP EBP                             ; 00458569
    POP EBX                             ; 0045856a
    RET                                 ; 0045856b
    PUSH EDI                            ; 0045856c
        ;   Label: LAB_0045856c
    PUSH ESI                            ; 0045856d
    MOV EDX,dword ptr [EBP + 0xd0ec]    ; 0045856e
    PUSH EDX                            ; 00458574
    PUSH EBX                            ; 00458575
    LEA ESI,[ESP + 0x70]                ; 00458576
    LEA EDI,[ESP + 0x10]                ; 0045857a
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 0045857e
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x70]                ; 00458583
    ADD ESP,0x8                         ; 00458587
    MOVSD ES:EDI,ESI                    ; 0045858a
    MOVSD ES:EDI,ESI                    ; 0045858b
    MOVSD ES:EDI,ESI                    ; 0045858c
    MOV ECX,dword ptr [EBP + 0xd0f0]    ; 0045858d
    PUSH ECX                            ; 00458593
    PUSH EBX                            ; 00458594
    LEA ESI,[ESP + 0x40]                ; 00458595
    LEA EDI,[ESP + 0x58]                ; 00458599
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 0045859d
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    ADD ESP,0x8                         ; 004585a2
    LEA ESI,[ESP + 0x38]                ; 004585a5
    FLD float ptr [ESP + 0x8]           ; 004585a9
    FLD float ptr [ESP + 0xc]           ; 004585ad
    MOVSD ES:EDI,ESI                    ; 004585b1
    MOVSD ES:EDI,ESI                    ; 004585b2
    MOVSD ES:EDI,ESI                    ; 004585b3
    FLD float ptr [ESP + 0x10]          ; 004585b4
    LEA EDI,[ESP + 0x44]                ; 004585b8
    LEA ESI,[ESP + 0x74]                ; 004585bc
    FXCH ST2                            ; 004585c0
    FADD float ptr [ESP + 0x50]         ; 004585c2
    FXCH                                ; 004585c6
    FADD float ptr [ESP + 0x54]         ; 004585c8
    FXCH ST2                            ; 004585cc
    FADD float ptr [ESP + 0x58]         ; 004585ce
    FXCH                                ; 004585d2
    FSTP float ptr [ESP + 0x74]         ; 004585d4
    FXCH                                ; 004585d8
    FSTP float ptr [ESP + 0x78]         ; 004585da
    FSTP float ptr [ESP + 0x7c]         ; 004585de
    MOVSD ES:EDI,ESI                    ; 004585e2
    MOVSD ES:EDI,ESI                    ; 004585e3
    MOVSD ES:EDI,ESI                    ; 004585e4
    FLD float ptr [0x005ba8de]          ; 004585e5 | DAT_005ba8de
    FLD float ptr [ESP + 0x44]          ; 004585eb
    FMUL ST1                            ; 004585ef
    FLD float ptr [ESP + 0x48]          ; 004585f1
    FMUL ST2                            ; 004585f5
    LEA EAX,[ESP + 0x20]                ; 004585f7
    FLD float ptr [ESP + 0x4c]          ; 004585fb
    FMULP ST3                           ; 004585ff
    PUSH EAX                            ; 00458601
    LEA EDI,[ESP + 0x24]                ; 00458602
    LEA ESI,[ESP + 0x18]                ; 00458606
    FXCH                                ; 0045860a
    FSTP float ptr [ESP + 0x18]         ; 0045860c
    FSTP float ptr [ESP + 0x1c]         ; 00458610
    FSTP float ptr [ESP + 0x20]         ; 00458614
    MOVSD ES:EDI,ESI                    ; 00458618
    MOVSD ES:EDI,ESI                    ; 00458619
    MOVSD ES:EDI,ESI                    ; 0045861a
    PUSH EBP                            ; 0045861b
    LEA ESI,[ESP + 0x64]                ; 0045861c
    LEA EDI,[ESP + 0x34]                ; 00458620
    CALL core_actor.cpp_FUN_00408b80    ; 00458624
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x64]                ; 00458629
    ADD ESP,0x8                         ; 0045862d
    LEA EAX,[ESP + 0x2c]                ; 00458630
    MOV EBX,dword ptr [ESP + 0x94]      ; 00458634
    MOVSD ES:EDI,ESI                    ; 0045863b
    MOVSD ES:EDI,ESI                    ; 0045863c
    MOVSD ES:EDI,ESI                    ; 0045863d
    CMP EAX,EBX                         ; 0045863e
    JZ 0x00458656                       ; 00458640
        ;   XREF to: 00458656 (CONDITIONAL_JUMP)  ; LAB_00458656
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00458642
    MOV dword ptr [EBX],EAX             ; 00458646
    MOV EAX,dword ptr [ESP + 0x30]      ; 00458648
    MOV dword ptr [EBX + 0x4],EAX       ; 0045864c
    MOV EAX,dword ptr [ESP + 0x34]      ; 0045864f
    MOV dword ptr [EBX + 0x8],EAX       ; 00458653
    MOV EAX,0x1                         ; 00458656
        ;   Label: LAB_00458656
    POP ESI                             ; 0045865b
    POP EDI                             ; 0045865c
    ADD ESP,0x7c                        ; 0045865d
    POP EBP                             ; 00458660
    POP EBX                             ; 00458661
    RET                                 ; 00458662

