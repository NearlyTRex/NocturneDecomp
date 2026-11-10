; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_clipPolygonToFar_FUN_0047a210(float z_far)
;
; Parameters:
; float            Stack[0x4]:4   z_far
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_0047a1f8 = 0047a2c4
;   undefined1* PTR_caseD_3_0047a200 = 0047a2a9
;   undefined4 DAT_01c59db0
;   undefined4 DAT_01c59e74
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_00479970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a210
        ;   Label: core_dtri.cpp_clipPolygonToFar_FUN_0047a210
    PUSH ESI                            ; 0047a211
    PUSH EDI                            ; 0047a212
    PUSH EBP                            ; 0047a213
    MOV EBP,ESP                         ; 0047a214
    SUB ESP,0x8                         ; 0047a216
    AND ESP,0xfffffff8                  ; 0047a219
    MOV EBX,dword ptr [0x01c59e74]      ; 0047a21c | DAT_01c59e74
    MOV EDX,dword ptr [EBP + 0x14]      ; 0047a222
    MOV dword ptr [ESP],EDX             ; 0047a225
    MOV EDX,dword ptr [0x01c59db0]      ; 0047a228 | DAT_01c59db0
    XOR EDI,EDI                         ; 0047a22e
    TEST EDX,EDX                        ; 0047a230
    JLE 0x0047a2b7                      ; 0047a232
        ;   XREF to: 0047a2b7 (CONDITIONAL_JUMP)  ; LAB_0047a2b7
    MOV ESI,0x1c59db4                   ; 0047a238
    MOV EAX,[0x01c59db0]                ; 0047a23d | DAT_01c59db0
        ;   Label: LAB_0047a23d
    LEA ECX,[EDI + 0x1]                 ; 0047a242
    CMP ECX,EAX                         ; 0047a245
    JNZ 0x0047a24b                      ; 0047a247
        ;   XREF to: 0047a24b (CONDITIONAL_JUMP)  ; LAB_0047a24b
    XOR ECX,EAX                         ; 0047a249
    IMUL ECX,ECX,0xc                    ; 0047a24b
        ;   Label: LAB_0047a24b
    MOV EAX,0x1c59db4                   ; 0047a24e
    FLD float ptr [ESI + 0x8]           ; 0047a253
    ADD EAX,ECX                         ; 0047a256
    MOV EDX,ESI                         ; 0047a258
    MOV dword ptr [ESP + 0x4],EAX       ; 0047a25a
    XOR ECX,ECX                         ; 0047a25e
    FCOMP float ptr [ESP]               ; 0047a260
    FNSTSW AX                           ; 0047a263
    SAHF                                ; 0047a265
    JBE 0x0047a26d                      ; 0047a266
        ;   XREF to: 0047a26d (CONDITIONAL_JUMP)  ; LAB_0047a26d
    MOV ECX,0x1                         ; 0047a268
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047a26d
        ;   Label: LAB_0047a26d
    FLD float ptr [EAX + 0x8]           ; 0047a271
    FCOMP float ptr [ESP]               ; 0047a274
    FNSTSW AX                           ; 0047a277
    SAHF                                ; 0047a279
    JBE 0x0047a27f                      ; 0047a27a
        ;   XREF to: 0047a27f (CONDITIONAL_JUMP)  ; LAB_0047a27f
    OR CL,0x2                           ; 0047a27c
    CMP ECX,0x3                         ; 0047a27f
        ;   Label: LAB_0047a27f
    JA 0x0047a2a9                       ; 0047a282
        ;   XREF to: 0047a2a9 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x47a1f4]  ; 0047a284 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0047a28b
        ;   Label: caseD_0
    ADD ECX,0x1c59e78                   ; 0047a28e
    CMP ECX,EDX                         ; 0047a294
    JZ 0x0047a2a8                       ; 0047a296
        ;   XREF to: 0047a2a8 (CONDITIONAL_JUMP)  ; LAB_0047a2a8
    MOV EAX,dword ptr [EDX]             ; 0047a298
    MOV dword ptr [ECX],EAX             ; 0047a29a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0047a29c
    MOV dword ptr [ECX + 0x4],EAX       ; 0047a29f
    MOV EAX,dword ptr [EDX + 0x8]       ; 0047a2a2
    MOV dword ptr [ECX + 0x8],EAX       ; 0047a2a5
    INC EBX                             ; 0047a2a8
        ;   Label: LAB_0047a2a8
    MOV ECX,dword ptr [0x01c59db0]      ; 0047a2a9 | DAT_01c59db0
        ;   Label: caseD_3
    INC EDI                             ; 0047a2af
    ADD ESI,0xc                         ; 0047a2b0
    CMP EDI,ECX                         ; 0047a2b3
    JL 0x0047a23d                       ; 0047a2b5
        ;   XREF to: 0047a23d (CONDITIONAL_JUMP)  ; LAB_0047a23d
    MOV dword ptr [0x01c59e74],EBX      ; 0047a2b7 | DAT_01c59e74
        ;   Label: LAB_0047a2b7
    MOV ESP,EBP                         ; 0047a2bd
    POP EBP                             ; 0047a2bf
    POP EDI                             ; 0047a2c0
    POP ESI                             ; 0047a2c1
    POP EBX                             ; 0047a2c2
    RET                                 ; 0047a2c3
    IMUL ECX,EBX,0xc                    ; 0047a2c4
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 0047a2c7
    SUB ESP,0x8                         ; 0047a2ca
    FSTP double ptr [ESP]               ; 0047a2cd
    PUSH 0xbff00000                     ; 0047a2d0
    PUSH 0x0                            ; 0047a2d5
    PUSH 0x0                            ; 0047a2d7
    PUSH 0x0                            ; 0047a2d9
    PUSH 0x0                            ; 0047a2db
    PUSH 0x0                            ; 0047a2dd
    ADD ECX,0x1c59e78                   ; 0047a2df
    PUSH ECX                            ; 0047a2e5
    PUSH EDX                            ; 0047a2e6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0047a2e7
    PUSH EAX                            ; 0047a2eb
    MOV dword ptr [0x01c59e74],EBX      ; 0047a2ec | DAT_01c59e74
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 0047a2f2
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00479970()
    MOV EBX,dword ptr [0x01c59e74]      ; 0047a2f7 | DAT_01c59e74
    ADD ESP,0x2c                        ; 0047a2fd
    JMP 0x0047a2a8                      ; 0047a300
        ;   XREF to: 0047a2a8 (UNCONDITIONAL_JUMP)  ; LAB_0047a2a8
    IMUL ECX,EBX,0xc                    ; 0047a302
        ;   Label: caseD_2
    ADD ECX,0x1c59e78                   ; 0047a305
    CMP ECX,EDX                         ; 0047a30b
    JZ 0x0047a31f                       ; 0047a30d
        ;   XREF to: 0047a31f (CONDITIONAL_JUMP)  ; LAB_0047a31f
    MOV EAX,dword ptr [EDX]             ; 0047a30f
    MOV dword ptr [ECX],EAX             ; 0047a311
    MOV EAX,dword ptr [EDX + 0x4]       ; 0047a313
    MOV dword ptr [ECX + 0x4],EAX       ; 0047a316
    MOV EAX,dword ptr [EDX + 0x8]       ; 0047a319
    MOV dword ptr [ECX + 0x8],EAX       ; 0047a31c
    INC EBX                             ; 0047a31f
        ;   Label: LAB_0047a31f
    IMUL ECX,EBX,0xc                    ; 0047a320
    FLD float ptr [ESP]                 ; 0047a323
    SUB ESP,0x8                         ; 0047a326
    FSTP double ptr [ESP]               ; 0047a329
    PUSH 0xbff00000                     ; 0047a32c
    PUSH 0x0                            ; 0047a331
    PUSH 0x0                            ; 0047a333
    PUSH 0x0                            ; 0047a335
    PUSH 0x0                            ; 0047a337
    PUSH 0x0                            ; 0047a339
    ADD ECX,0x1c59e78                   ; 0047a33b
    PUSH ECX                            ; 0047a341
    MOV ECX,dword ptr [ESP + 0x28]      ; 0047a342
    PUSH ECX                            ; 0047a346
    PUSH EDX                            ; 0047a347
    MOV dword ptr [0x01c59e74],EBX      ; 0047a348 | DAT_01c59e74
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 0047a34e
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00479970()
    MOV EBX,dword ptr [0x01c59e74]      ; 0047a353 | DAT_01c59e74
    ADD ESP,0x2c                        ; 0047a359
    JMP 0x0047a2a8                      ; 0047a35c
        ;   XREF to: 0047a2a8 (UNCONDITIONAL_JUMP)  ; LAB_0047a2a8

