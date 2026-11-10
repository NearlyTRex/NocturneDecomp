; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipPolygonAgainstMaxX_FUN_00444220(float max_x_plane)
;
; Parameters:
; float            Stack[0x4]:4   max_x_plane
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00444208 = 004442ca
;   undefined1* PTR_caseD_3_00444210 = 004442af
;   undefined4 DAT_015109d4
;   undefined4 DAT_01510a98
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_00443db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444220
        ;   Label: core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00444220
    PUSH ESI                            ; 00444221
    PUSH EDI                            ; 00444222
    PUSH EBP                            ; 00444223
    MOV EBP,ESP                         ; 00444224
    SUB ESP,0x4                         ; 00444226
    AND ESP,0xfffffff8                  ; 00444229
    MOV EBX,dword ptr [0x01510a98]      ; 0044422c | DAT_01510a98
    MOV EDX,dword ptr [0x015109d4]      ; 00444232 | DAT_015109d4
    XOR ESI,ESI                         ; 00444238
    TEST EDX,EDX                        ; 0044423a
    JLE 0x004442bd                      ; 0044423c
        ;   XREF to: 004442bd (CONDITIONAL_JUMP)  ; LAB_004442bd
    MOV EDI,0x15109d8                   ; 00444242
    MOV EAX,[0x015109d4]                ; 00444247 | DAT_015109d4
        ;   Label: LAB_00444247
    LEA ECX,[ESI + 0x1]                 ; 0044424c
    CMP ECX,EAX                         ; 0044424f
    JNZ 0x00444255                      ; 00444251
        ;   XREF to: 00444255 (CONDITIONAL_JUMP)  ; LAB_00444255
    XOR ECX,EAX                         ; 00444253
    IMUL ECX,ECX,0xc                    ; 00444255
        ;   Label: LAB_00444255
    MOV EAX,0x15109d8                   ; 00444258
    FLD float ptr [EDI]                 ; 0044425d
    ADD EAX,ECX                         ; 0044425f
    MOV EDX,EDI                         ; 00444261
    MOV dword ptr [ESP],EAX             ; 00444263
    XOR ECX,ECX                         ; 00444266
    FCOMP float ptr [EBP + 0x14]        ; 00444268
    FNSTSW AX                           ; 0044426b
    SAHF                                ; 0044426d
    JBE 0x00444275                      ; 0044426e
        ;   XREF to: 00444275 (CONDITIONAL_JUMP)  ; LAB_00444275
    MOV ECX,0x1                         ; 00444270
    MOV EAX,dword ptr [ESP]             ; 00444275
        ;   Label: LAB_00444275
    FLD float ptr [EAX]                 ; 00444278
    FCOMP float ptr [EBP + 0x14]        ; 0044427a
    FNSTSW AX                           ; 0044427d
    SAHF                                ; 0044427f
    JBE 0x00444285                      ; 00444280
        ;   XREF to: 00444285 (CONDITIONAL_JUMP)  ; LAB_00444285
    OR CL,0x2                           ; 00444282
    CMP ECX,0x3                         ; 00444285
        ;   Label: LAB_00444285
    JA 0x004442af                       ; 00444288
        ;   XREF to: 004442af (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x444204]  ; 0044428a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00444291
        ;   Label: caseD_0
    ADD ECX,0x1510a9c                   ; 00444294
    CMP ECX,EDX                         ; 0044429a
    JZ 0x004442ae                       ; 0044429c
        ;   XREF to: 004442ae (CONDITIONAL_JUMP)  ; LAB_004442ae
    MOV EAX,dword ptr [EDX]             ; 0044429e
    MOV dword ptr [ECX],EAX             ; 004442a0
    MOV EAX,dword ptr [EDX + 0x4]       ; 004442a2
    MOV dword ptr [ECX + 0x4],EAX       ; 004442a5
    MOV EAX,dword ptr [EDX + 0x8]       ; 004442a8
    MOV dword ptr [ECX + 0x8],EAX       ; 004442ab
    INC EBX                             ; 004442ae
        ;   Label: LAB_004442ae
    MOV ECX,dword ptr [0x015109d4]      ; 004442af | DAT_015109d4
        ;   Label: caseD_3
    INC ESI                             ; 004442b5
    ADD EDI,0xc                         ; 004442b6
    CMP ESI,ECX                         ; 004442b9
    JL 0x00444247                       ; 004442bb
        ;   XREF to: 00444247 (CONDITIONAL_JUMP)  ; LAB_00444247
    MOV dword ptr [0x01510a98],EBX      ; 004442bd | DAT_01510a98
        ;   Label: LAB_004442bd
    MOV ESP,EBP                         ; 004442c3
    POP EBP                             ; 004442c5
    POP EDI                             ; 004442c6
    POP ESI                             ; 004442c7
    POP EBX                             ; 004442c8
    RET                                 ; 004442c9
    IMUL ECX,EBX,0xc                    ; 004442ca
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 004442cd
    SUB ESP,0x8                         ; 004442d0
    FCHS                                ; 004442d3
    FSTP double ptr [ESP]               ; 004442d5
    PUSH 0x0                            ; 004442d8
    PUSH 0x0                            ; 004442da
    PUSH 0x0                            ; 004442dc
    PUSH 0x0                            ; 004442de
    PUSH 0x3ff00000                     ; 004442e0
    PUSH 0x0                            ; 004442e5
    ADD ECX,0x1510a9c                   ; 004442e7
    PUSH ECX                            ; 004442ed
    PUSH EDX                            ; 004442ee
    MOV EAX,dword ptr [ESP + 0x28]      ; 004442ef
    PUSH EAX                            ; 004442f3
    MOV dword ptr [0x01510a98],EBX      ; 004442f4 | DAT_01510a98
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 004442fa
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00443db0()
    MOV EBX,dword ptr [0x01510a98]      ; 004442ff | DAT_01510a98
    ADD ESP,0x2c                        ; 00444305
    JMP 0x004442ae                      ; 00444308
        ;   XREF to: 004442ae (UNCONDITIONAL_JUMP)  ; LAB_004442ae
    IMUL ECX,EBX,0xc                    ; 0044430a
        ;   Label: caseD_2
    ADD ECX,0x1510a9c                   ; 0044430d
    CMP ECX,EDX                         ; 00444313
    JZ 0x00444327                       ; 00444315
        ;   XREF to: 00444327 (CONDITIONAL_JUMP)  ; LAB_00444327
    MOV EAX,dword ptr [EDX]             ; 00444317
    MOV dword ptr [ECX],EAX             ; 00444319
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044431b
    MOV dword ptr [ECX + 0x4],EAX       ; 0044431e
    MOV EAX,dword ptr [EDX + 0x8]       ; 00444321
    MOV dword ptr [ECX + 0x8],EAX       ; 00444324
    INC EBX                             ; 00444327
        ;   Label: LAB_00444327
    IMUL ECX,EBX,0xc                    ; 00444328
    FLD float ptr [EBP + 0x14]          ; 0044432b
    SUB ESP,0x8                         ; 0044432e
    FCHS                                ; 00444331
    FSTP double ptr [ESP]               ; 00444333
    PUSH 0x0                            ; 00444336
    PUSH 0x0                            ; 00444338
    PUSH 0x0                            ; 0044433a
    PUSH 0x0                            ; 0044433c
    PUSH 0x3ff00000                     ; 0044433e
    PUSH 0x0                            ; 00444343
    ADD ECX,0x1510a9c                   ; 00444345
    PUSH ECX                            ; 0044434b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0044434c
    PUSH ECX                            ; 00444350
    PUSH EDX                            ; 00444351
    MOV dword ptr [0x01510a98],EBX      ; 00444352 | DAT_01510a98
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 00444358
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00443db0()
    MOV EBX,dword ptr [0x01510a98]      ; 0044435d | DAT_01510a98
    ADD ESP,0x2c                        ; 00444363
    JMP 0x004442ae                      ; 00444366
        ;   XREF to: 004442ae (UNCONDITIONAL_JUMP)  ; LAB_004442ae

