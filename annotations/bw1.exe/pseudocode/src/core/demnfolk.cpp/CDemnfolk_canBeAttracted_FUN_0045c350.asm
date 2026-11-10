; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_demnfolk_cpp_CDemnfolk_canBeAttracted_FUN_0045c350(CDemnfolk *this_ptr,CDemonActor *grabber)
;
; Parameters:
; CDemnfolk *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
;
; Referenced Globals:
;   undefined4 DAT_005d825f
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_motion.cpp_FUN_00524a40
;   core_skeleton.cpp_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c350
        ;   Label: core_demnfolk.cpp_CDemnfolk_canBeAttracted_FUN_0045c350
    PUSH EBP                            ; 0045c351
    SUB ESP,0x7c                        ; 0045c352
    MOV EBP,dword ptr [ESP + 0x88]      ; 0045c355
    PUSH 0xe                            ; 0045c35c
    LEA EBX,[EBP + 0x158]               ; 0045c35e
    PUSH EBX                            ; 0045c364
    CALL core_motion.cpp_FUN_00524a40   ; 0045c365
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x80],EAX      ; 0045c36a
    FLD float ptr [ESP + 0x80]          ; 0045c371
    FLDZ                                ; 0045c378
    ADD ESP,0x8                         ; 0045c37a
    FCOMPP                              ; 0045c37d
    FNSTSW AX                           ; 0045c37f
    SAHF                                ; 0045c381
    JC 0x0045c38c                       ; 0045c382
        ;   XREF to: 0045c38c (CONDITIONAL_JUMP)  ; LAB_0045c38c
    XOR EAX,EAX                         ; 0045c384
    ADD ESP,0x7c                        ; 0045c386
    POP EBP                             ; 0045c389
    POP EBX                             ; 0045c38a
    RET                                 ; 0045c38b
    PUSH EDI                            ; 0045c38c
        ;   Label: LAB_0045c38c
    PUSH ESI                            ; 0045c38d
    MOV EDX,dword ptr [EBP + 0xc300]    ; 0045c38e
    PUSH EDX                            ; 0045c394
    PUSH EBX                            ; 0045c395
    LEA ESI,[ESP + 0x70]                ; 0045c396
    LEA EDI,[ESP + 0x10]                ; 0045c39a
    CALL core_skeleton.cpp_FUN_00569130 ; 0045c39e
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x70]                ; 0045c3a3
    ADD ESP,0x8                         ; 0045c3a7
    MOVSD ES:EDI,ESI                    ; 0045c3aa
    MOVSD ES:EDI,ESI                    ; 0045c3ab
    MOVSD ES:EDI,ESI                    ; 0045c3ac
    MOV ECX,dword ptr [EBP + 0xc304]    ; 0045c3ad
    PUSH ECX                            ; 0045c3b3
    PUSH EBX                            ; 0045c3b4
    LEA ESI,[ESP + 0x40]                ; 0045c3b5
    LEA EDI,[ESP + 0x58]                ; 0045c3b9
    CALL core_skeleton.cpp_FUN_00569130 ; 0045c3bd
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 0045c3c2
    LEA ESI,[ESP + 0x38]                ; 0045c3c5
    FLD float ptr [ESP + 0x8]           ; 0045c3c9
    FLD float ptr [ESP + 0xc]           ; 0045c3cd
    MOVSD ES:EDI,ESI                    ; 0045c3d1
    MOVSD ES:EDI,ESI                    ; 0045c3d2
    MOVSD ES:EDI,ESI                    ; 0045c3d3
    FLD float ptr [ESP + 0x10]          ; 0045c3d4
    LEA EDI,[ESP + 0x44]                ; 0045c3d8
    LEA ESI,[ESP + 0x74]                ; 0045c3dc
    FXCH ST2                            ; 0045c3e0
    FADD float ptr [ESP + 0x50]         ; 0045c3e2
    FXCH                                ; 0045c3e6
    FADD float ptr [ESP + 0x54]         ; 0045c3e8
    FXCH ST2                            ; 0045c3ec
    FADD float ptr [ESP + 0x58]         ; 0045c3ee
    FXCH                                ; 0045c3f2
    FSTP float ptr [ESP + 0x74]         ; 0045c3f4
    FXCH                                ; 0045c3f8
    FSTP float ptr [ESP + 0x78]         ; 0045c3fa
    FSTP float ptr [ESP + 0x7c]         ; 0045c3fe
    MOVSD ES:EDI,ESI                    ; 0045c402
    MOVSD ES:EDI,ESI                    ; 0045c403
    MOVSD ES:EDI,ESI                    ; 0045c404
    FLD float ptr [0x005d825f]          ; 0045c405 | DAT_005d825f
    FLD float ptr [ESP + 0x44]          ; 0045c40b
    FMUL ST1                            ; 0045c40f
    FLD float ptr [ESP + 0x48]          ; 0045c411
    FMUL ST2                            ; 0045c415
    LEA EAX,[ESP + 0x20]                ; 0045c417
    FLD float ptr [ESP + 0x4c]          ; 0045c41b
    FMULP ST3                           ; 0045c41f
    PUSH EAX                            ; 0045c421
    LEA EDI,[ESP + 0x24]                ; 0045c422
    LEA ESI,[ESP + 0x18]                ; 0045c426
    FXCH                                ; 0045c42a
    FSTP float ptr [ESP + 0x18]         ; 0045c42c
    FSTP float ptr [ESP + 0x1c]         ; 0045c430
    FSTP float ptr [ESP + 0x20]         ; 0045c434
    MOVSD ES:EDI,ESI                    ; 0045c438
    MOVSD ES:EDI,ESI                    ; 0045c439
    MOVSD ES:EDI,ESI                    ; 0045c43a
    PUSH EBP                            ; 0045c43b
    LEA ESI,[ESP + 0x64]                ; 0045c43c
    LEA EDI,[ESP + 0x34]                ; 0045c440
    CALL core_actor.cpp_FUN_00408b40    ; 0045c444
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x64]                ; 0045c449
    ADD ESP,0x8                         ; 0045c44d
    LEA EAX,[ESP + 0x2c]                ; 0045c450
    MOV EBX,dword ptr [ESP + 0x94]      ; 0045c454
    MOVSD ES:EDI,ESI                    ; 0045c45b
    MOVSD ES:EDI,ESI                    ; 0045c45c
    MOVSD ES:EDI,ESI                    ; 0045c45d
    CMP EAX,EBX                         ; 0045c45e
    JZ 0x0045c476                       ; 0045c460
        ;   XREF to: 0045c476 (CONDITIONAL_JUMP)  ; LAB_0045c476
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0045c462
    MOV dword ptr [EBX],EAX             ; 0045c466
    MOV EAX,dword ptr [ESP + 0x30]      ; 0045c468
    MOV dword ptr [EBX + 0x4],EAX       ; 0045c46c
    MOV EAX,dword ptr [ESP + 0x34]      ; 0045c46f
    MOV dword ptr [EBX + 0x8],EAX       ; 0045c473
    MOV EAX,0x1                         ; 0045c476
        ;   Label: LAB_0045c476
    POP ESI                             ; 0045c47b
    POP EDI                             ; 0045c47c
    ADD ESP,0x7c                        ; 0045c47d
    POP EBP                             ; 0045c480
    POP EBX                             ; 0045c481
    RET                                 ; 0045c482

