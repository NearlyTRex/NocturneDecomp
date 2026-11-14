; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_00491260(float x_max)
;
; Parameters:
; float            Stack[0x4]:4   x_max
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00491248 = 0049130a
;   undefined1* PTR_caseD_3_00491250 = 004912ef
;   undefined4 DAT_01c3d5c8
;   undefined4 DAT_01c3d68c
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_00490df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491260
        ;   Label: core_dtri.cpp_clipPolygonToRight_FUN_00491260
    PUSH ESI                            ; 00491261
    PUSH EDI                            ; 00491262
    PUSH EBP                            ; 00491263
    MOV EBP,ESP                         ; 00491264
    SUB ESP,0x4                         ; 00491266
    AND ESP,0xfffffff8                  ; 00491269
    MOV EBX,dword ptr [0x01c3d68c]      ; 0049126c | DAT_01c3d68c
    MOV EDX,dword ptr [0x01c3d5c8]      ; 00491272 | DAT_01c3d5c8
    XOR ESI,ESI                         ; 00491278
    TEST EDX,EDX                        ; 0049127a
    JLE 0x004912fd                      ; 0049127c
        ;   XREF to: 004912fd (CONDITIONAL_JUMP)  ; LAB_004912fd
    MOV EDI,0x1c3d5cc                   ; 00491282
    MOV EAX,[0x01c3d5c8]                ; 00491287 | DAT_01c3d5c8
        ;   Label: LAB_00491287
    LEA ECX,[ESI + 0x1]                 ; 0049128c
    CMP ECX,EAX                         ; 0049128f
    JNZ 0x00491295                      ; 00491291
        ;   XREF to: 00491295 (CONDITIONAL_JUMP)  ; LAB_00491295
    XOR ECX,EAX                         ; 00491293
    IMUL ECX,ECX,0xc                    ; 00491295
        ;   Label: LAB_00491295
    MOV EAX,0x1c3d5cc                   ; 00491298
    FLD float ptr [EDI]                 ; 0049129d
    ADD EAX,ECX                         ; 0049129f
    MOV EDX,EDI                         ; 004912a1
    MOV dword ptr [ESP],EAX             ; 004912a3
    XOR ECX,ECX                         ; 004912a6
    FCOMP float ptr [EBP + 0x14]        ; 004912a8
    FNSTSW AX                           ; 004912ab
    SAHF                                ; 004912ad
    JBE 0x004912b5                      ; 004912ae
        ;   XREF to: 004912b5 (CONDITIONAL_JUMP)  ; LAB_004912b5
    MOV ECX,0x1                         ; 004912b0
    MOV EAX,dword ptr [ESP]             ; 004912b5
        ;   Label: LAB_004912b5
    FLD float ptr [EAX]                 ; 004912b8
    FCOMP float ptr [EBP + 0x14]        ; 004912ba
    FNSTSW AX                           ; 004912bd
    SAHF                                ; 004912bf
    JBE 0x004912c5                      ; 004912c0
        ;   XREF to: 004912c5 (CONDITIONAL_JUMP)  ; LAB_004912c5
    OR CL,0x2                           ; 004912c2
    CMP ECX,0x3                         ; 004912c5
        ;   Label: LAB_004912c5
    JA 0x004912ef                       ; 004912c8
        ;   XREF to: 004912ef (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x491244]  ; 004912ca | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 004912d1
        ;   Label: caseD_0
    ADD ECX,0x1c3d690                   ; 004912d4
    CMP ECX,EDX                         ; 004912da
    JZ 0x004912ee                       ; 004912dc
        ;   XREF to: 004912ee (CONDITIONAL_JUMP)  ; LAB_004912ee
    MOV EAX,dword ptr [EDX]             ; 004912de
    MOV dword ptr [ECX],EAX             ; 004912e0
    MOV EAX,dword ptr [EDX + 0x4]       ; 004912e2
    MOV dword ptr [ECX + 0x4],EAX       ; 004912e5
    MOV EAX,dword ptr [EDX + 0x8]       ; 004912e8
    MOV dword ptr [ECX + 0x8],EAX       ; 004912eb
    INC EBX                             ; 004912ee
        ;   Label: LAB_004912ee
    MOV ECX,dword ptr [0x01c3d5c8]      ; 004912ef | DAT_01c3d5c8
        ;   Label: caseD_3
    INC ESI                             ; 004912f5
    ADD EDI,0xc                         ; 004912f6
    CMP ESI,ECX                         ; 004912f9
    JL 0x00491287                       ; 004912fb
        ;   XREF to: 00491287 (CONDITIONAL_JUMP)  ; LAB_00491287
    MOV dword ptr [0x01c3d68c],EBX      ; 004912fd | DAT_01c3d68c
        ;   Label: LAB_004912fd
    MOV ESP,EBP                         ; 00491303
    POP EBP                             ; 00491305
    POP EDI                             ; 00491306
    POP ESI                             ; 00491307
    POP EBX                             ; 00491308
    RET                                 ; 00491309
    IMUL ECX,EBX,0xc                    ; 0049130a
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 0049130d
    SUB ESP,0x8                         ; 00491310
    FCHS                                ; 00491313
    FSTP double ptr [ESP]               ; 00491315
    PUSH 0x0                            ; 00491318
    PUSH 0x0                            ; 0049131a
    PUSH 0x0                            ; 0049131c
    PUSH 0x0                            ; 0049131e
    PUSH 0x3ff00000                     ; 00491320
    PUSH 0x0                            ; 00491325
    ADD ECX,0x1c3d690                   ; 00491327
    PUSH ECX                            ; 0049132d
    PUSH EDX                            ; 0049132e
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049132f
    PUSH EAX                            ; 00491333
    MOV dword ptr [0x01c3d68c],EBX      ; 00491334 | DAT_01c3d68c
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 0049133a
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c3d68c]      ; 0049133f | DAT_01c3d68c
    ADD ESP,0x2c                        ; 00491345
    JMP 0x004912ee                      ; 00491348
        ;   XREF to: 004912ee (UNCONDITIONAL_JUMP)  ; LAB_004912ee
    IMUL ECX,EBX,0xc                    ; 0049134a
        ;   Label: caseD_2
    ADD ECX,0x1c3d690                   ; 0049134d
    CMP ECX,EDX                         ; 00491353
    JZ 0x00491367                       ; 00491355
        ;   XREF to: 00491367 (CONDITIONAL_JUMP)  ; LAB_00491367
    MOV EAX,dword ptr [EDX]             ; 00491357
    MOV dword ptr [ECX],EAX             ; 00491359
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049135b
    MOV dword ptr [ECX + 0x4],EAX       ; 0049135e
    MOV EAX,dword ptr [EDX + 0x8]       ; 00491361
    MOV dword ptr [ECX + 0x8],EAX       ; 00491364
    INC EBX                             ; 00491367
        ;   Label: LAB_00491367
    IMUL ECX,EBX,0xc                    ; 00491368
    FLD float ptr [EBP + 0x14]          ; 0049136b
    SUB ESP,0x8                         ; 0049136e
    FCHS                                ; 00491371
    FSTP double ptr [ESP]               ; 00491373
    PUSH 0x0                            ; 00491376
    PUSH 0x0                            ; 00491378
    PUSH 0x0                            ; 0049137a
    PUSH 0x0                            ; 0049137c
    PUSH 0x3ff00000                     ; 0049137e
    PUSH 0x0                            ; 00491383
    ADD ECX,0x1c3d690                   ; 00491385
    PUSH ECX                            ; 0049138b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0049138c
    PUSH ECX                            ; 00491390
    PUSH EDX                            ; 00491391
    MOV dword ptr [0x01c3d68c],EBX      ; 00491392 | DAT_01c3d68c
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 00491398
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c3d68c]      ; 0049139d | DAT_01c3d68c
    ADD ESP,0x2c                        ; 004913a3
    JMP 0x004912ee                      ; 004913a6
        ;   XREF to: 004912ee (UNCONDITIONAL_JUMP)  ; LAB_004912ee

