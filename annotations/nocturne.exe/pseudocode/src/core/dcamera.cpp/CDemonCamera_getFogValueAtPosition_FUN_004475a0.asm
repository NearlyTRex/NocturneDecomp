; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   FUN_004f6d90 at 004f6edb
;   core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670 at 004476d4
;
; Referenced Globals:
;   double DOUBLE_0057baf3 = 256
;   undefined4 DAT_0059bde4
;
; Called Functions:
;   core_dcamera.cpp_sampleFogAlongRay_FUN_0043fc80
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004475a0
        ;   Label: core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0
    PUSH ESI                            ; 004475a1
    PUSH EBP                            ; 004475a2
    SUB ESP,0x1c                        ; 004475a3
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004475a6
    MOV ECX,dword ptr [ESP + 0x30]      ; 004475aa
    MOV EAX,dword ptr [ECX]             ; 004475ae
    MOV EBX,dword ptr [EDX + 0x16c]     ; 004475b0
    SUB EAX,EBX                         ; 004475b6
    MOV dword ptr [ESP + 0xc],EAX       ; 004475b8
    MOV EAX,dword ptr [ECX + 0x4]       ; 004475bc
    MOV ESI,dword ptr [EDX + 0x170]     ; 004475bf
    SUB EAX,ESI                         ; 004475c5
    MOV dword ptr [ESP + 0x10],EAX      ; 004475c7
    MOV EAX,dword ptr [ECX + 0x8]       ; 004475cb
    SUB EAX,dword ptr [EDX + 0x174]     ; 004475ce
    MOV EBX,ESP                         ; 004475d4
    MOV dword ptr [ESP + 0x14],EAX      ; 004475d6
    LEA EAX,[ESP + 0xc]                 ; 004475da
    FILD dword ptr [EAX]                ; 004475de
    FMUL float ptr [0x0059bde4]         ; 004475e0 | DAT_0059bde4
    FSTP float ptr [EBX]                ; 004475e6
    FILD dword ptr [EAX + 0x4]          ; 004475e8
    FMUL float ptr [0x0059bde4]         ; 004475eb | DAT_0059bde4
    FSTP float ptr [EBX + 0x4]          ; 004475f1
    FILD dword ptr [EAX + 0x8]          ; 004475f4
    FMUL float ptr [0x0059bde4]         ; 004475f7 | DAT_0059bde4
    FSTP float ptr [EBX + 0x8]          ; 004475fd
    FLD float ptr [ESP + 0x4]           ; 00447600
    FMUL ST0                            ; 00447604
    FLD float ptr [ESP]                 ; 00447606
    FMUL ST0                            ; 00447609
    FADDP                               ; 0044760b
    FLD float ptr [ESP + 0x8]           ; 0044760d
    FMUL ST0                            ; 00447611
    FADDP                               ; 00447613
    FSQRT                               ; 00447615
    FMUL double ptr [0x0057baf3]        ; 00447617 | DOUBLE_0057baf3
    CALL crt_math.c_round_FUN_00563a30  ; 0044761d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x18]        ; 00447622
    MOV EBP,dword ptr [ESP + 0x18]      ; 00447626
    PUSH EBP                            ; 0044762a
    PUSH ECX                            ; 0044762b
    ADD EDX,0x16c                       ; 0044762c
    PUSH EDX                            ; 00447632
    PUSH 0x140d784                      ; 00447633
    CALL core_dcamera.cpp_sampleFogAlongRay_FUN_0043fc80 ; 00447638
        ;   XREF to: 0043fc80 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_sampleFogAlongRay_FUN_0043fc80()
    MOV EDX,EAX                         ; 0044763d
    SHL EAX,0x4                         ; 0044763f
    ADD EAX,EDX                         ; 00447642
    MOV EDX,EAX                         ; 00447644
    SHL EAX,0x4                         ; 00447646
    SUB EAX,EDX                         ; 00447649
    SHR EAX,0xe                         ; 0044764b
    ADD ESP,0x10                        ; 0044764e
    CMP EAX,0xff                        ; 00447651
    JBE 0x00447664                      ; 00447656
        ;   XREF to: 00447664 (CONDITIONAL_JUMP)  ; LAB_00447664
    MOV EAX,0xffff                      ; 00447658
    ADD ESP,0x1c                        ; 0044765d
    POP EBP                             ; 00447660
    POP ESI                             ; 00447661
    POP EBX                             ; 00447662
    RET                                 ; 00447663
    SHL EAX,0x8                         ; 00447664
        ;   Label: LAB_00447664
    ADD ESP,0x1c                        ; 00447667
    POP EBP                             ; 0044766a
    POP ESI                             ; 0044766b
    POP EBX                             ; 0044766c
    RET                                 ; 0044766d

