; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_dcamera_cpp_FUN_004504b0(int param_1,int *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ba06e
;   undefined4 DAT_005ddfc4
;
; Called Functions:
;   core_dcamera.cpp_sampleFogAlongRay_FUN_00448980
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004504b0
        ;   Label: core_dcamera.cpp_FUN_004504b0
    PUSH ESI                            ; 004504b1
    PUSH EBP                            ; 004504b2
    MOV EBP,ESP                         ; 004504b3
    SUB ESP,0x1c                        ; 004504b5
    AND ESP,0xfffffff8                  ; 004504b8
    MOV EDX,dword ptr [EBP + 0x10]      ; 004504bb
    MOV ECX,dword ptr [EBP + 0x14]      ; 004504be
    MOV EAX,dword ptr [ECX]             ; 004504c1
    MOV EBX,dword ptr [EDX + 0x16c]     ; 004504c3
    SUB EAX,EBX                         ; 004504c9
    MOV dword ptr [ESP],EAX             ; 004504cb
    MOV EAX,dword ptr [ECX + 0x4]       ; 004504ce
    MOV ESI,dword ptr [EDX + 0x170]     ; 004504d1
    SUB EAX,ESI                         ; 004504d7
    MOV dword ptr [ESP + 0x4],EAX       ; 004504d9
    MOV EAX,dword ptr [ECX + 0x8]       ; 004504dd
    SUB EAX,dword ptr [EDX + 0x174]     ; 004504e0
    LEA EBX,[ESP + 0xc]                 ; 004504e6
    MOV dword ptr [ESP + 0x8],EAX       ; 004504ea
    MOV EAX,ESP                         ; 004504ee
    FILD dword ptr [EAX]                ; 004504f0
    FMUL float ptr [0x005ddfc4]         ; 004504f2 | DAT_005ddfc4
    FSTP float ptr [EBX]                ; 004504f8
    FILD dword ptr [EAX + 0x4]          ; 004504fa
    FMUL float ptr [0x005ddfc4]         ; 004504fd | DAT_005ddfc4
    FSTP float ptr [EBX + 0x4]          ; 00450503
    FILD dword ptr [EAX + 0x8]          ; 00450506
    FMUL float ptr [0x005ddfc4]         ; 00450509 | DAT_005ddfc4
    FSTP float ptr [EBX + 0x8]          ; 0045050f
    FLD float ptr [ESP + 0x10]          ; 00450512
    FMUL ST0                            ; 00450516
    FLD float ptr [ESP + 0xc]           ; 00450518
    FMUL ST0                            ; 0045051c
    FADDP                               ; 0045051e
    FLD float ptr [ESP + 0x14]          ; 00450520
    FMUL ST0                            ; 00450524
    FADDP                               ; 00450526
    FSQRT                               ; 00450528
    FMUL double ptr [0x005ba06e]        ; 0045052a | DAT_005ba06e
    CALL crt_math.c_round_FUN_005a3120  ; 00450530
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x18]        ; 00450535
    MOV EAX,dword ptr [ESP + 0x18]      ; 00450539
    PUSH EAX                            ; 0045053d
    PUSH ECX                            ; 0045053e
    ADD EDX,0x16c                       ; 0045053f
    PUSH EDX                            ; 00450545
    PUSH 0x149d6dc                      ; 00450546
    CALL core_dcamera.cpp_sampleFogAlongRay_FUN_00448980 ; 0045054b
        ;   XREF to: 00448980 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_sampleFogAlongRay_FUN_00448980()
    MOV EDX,EAX                         ; 00450550
    SHL EAX,0x4                         ; 00450552
    ADD EAX,EDX                         ; 00450555
    MOV EDX,EAX                         ; 00450557
    SHL EAX,0x4                         ; 00450559
    SUB EAX,EDX                         ; 0045055c
    SHR EAX,0xe                         ; 0045055e
    ADD ESP,0x10                        ; 00450561
    CMP EAX,0xff                        ; 00450564
    JBE 0x00450576                      ; 00450569
        ;   XREF to: 00450576 (CONDITIONAL_JUMP)  ; LAB_00450576
    MOV EAX,0xffff                      ; 0045056b
    MOV ESP,EBP                         ; 00450570
    POP EBP                             ; 00450572
    POP ESI                             ; 00450573
    POP EBX                             ; 00450574
    RET                                 ; 00450575
    SHL EAX,0x8                         ; 00450576
        ;   Label: LAB_00450576
    MOV ESP,EBP                         ; 00450579
    POP EBP                             ; 0045057b
    POP ESI                             ; 0045057c
    POP EBX                             ; 0045057d
    RET                                 ; 0045057e

