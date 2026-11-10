; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cloth_cpp_FUN_004421d0(int param_1,float *param_2)
;
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004421d0
        ;   Label: core_cloth.cpp_FUN_004421d0
    PUSH ESI                            ; 004421d1
    PUSH EDI                            ; 004421d2
    PUSH EBP                            ; 004421d3
    SUB ESP,0x78                        ; 004421d4
    MOV EBX,dword ptr [ESP + 0x90]      ; 004421d7
    FLD float ptr [EBX]                 ; 004421de
    FLD float ptr [EBX + 0x4]           ; 004421e0
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004421e3
    FLD float ptr [EBX + 0x8]           ; 004421ea
    ADD EAX,0x3ab14                     ; 004421ed
    LEA EDI,[ESP + 0x40]                ; 004421f2
    LEA ESI,[ESP + 0x58]                ; 004421f6
    FXCH ST2                            ; 004421fa
    FSUB float ptr [EAX]                ; 004421fc
    FXCH                                ; 004421fe
    FSUB float ptr [EAX + 0x4]          ; 00442200
    FXCH ST2                            ; 00442203
    FSUB float ptr [EAX + 0x8]          ; 00442205
    FXCH                                ; 00442208
    FSTP float ptr [ESP + 0x58]         ; 0044220a
    FXCH                                ; 0044220e
    FSTP float ptr [ESP + 0x5c]         ; 00442210
    FSTP float ptr [ESP + 0x60]         ; 00442214
    MOVSD ES:EDI,ESI                    ; 00442218
    MOVSD ES:EDI,ESI                    ; 00442219
    MOVSD ES:EDI,ESI                    ; 0044221a
    CMP EAX,EBX                         ; 0044221b
    JZ 0x0044222f                       ; 0044221d
        ;   XREF to: 0044222f (CONDITIONAL_JUMP)  ; LAB_0044222f
    MOV EDX,dword ptr [EBX]             ; 0044221f
    MOV dword ptr [EAX],EDX             ; 00442221
    MOV EDX,dword ptr [EBX + 0x4]       ; 00442223
    MOV dword ptr [EAX + 0x4],EDX       ; 00442226
    MOV EDX,dword ptr [EBX + 0x8]       ; 00442229
    MOV dword ptr [EAX + 0x8],EDX       ; 0044222c
    LEA EAX,[ESP + 0x40]                ; 0044222f
        ;   Label: LAB_0044222f
    PUSH EAX                            ; 00442233
    LEA EAX,[ESP + 0x4]                 ; 00442234
    PUSH EAX                            ; 00442238
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 00442239
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0044223e
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00442241
    XOR EDX,EDX                         ; 00442248
    MOV ECX,dword ptr [EAX + 0x104]     ; 0044224a
    MOV dword ptr [ESP + 0x74],EDX      ; 00442250
    TEST ECX,ECX                        ; 00442254
    JLE 0x00442319                      ; 00442256
        ;   XREF to: 00442319 (CONDITIONAL_JUMP)  ; LAB_00442319
    ADD EAX,0x398                       ; 0044225c
    MOV dword ptr [ESP + 0x70],EAX      ; 00442261
    LEA EBX,[EAX + 0x24]                ; 00442265
    IMUL EBP,dword ptr [ESP + 0x74],0x11c ; 00442268
        ;   Label: LAB_00442268
    ADD EBP,dword ptr [ESP + 0x70]      ; 00442270
    PUSH EBP                            ; 00442274
    LEA EAX,[ESP + 0x4]                 ; 00442275
    PUSH EAX                            ; 00442279
    LEA ESI,[ESP + 0x6c]                ; 0044227a
    LEA EDI,[ESP + 0x54]                ; 0044227e
    CALL core_dirmat.cpp_FUN_0045f700   ; 00442282
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x6c]                ; 00442287
    ADD ESP,0x8                         ; 0044228b
    LEA EAX,[ESP + 0x4c]                ; 0044228e
    MOVSD ES:EDI,ESI                    ; 00442292
    MOVSD ES:EDI,ESI                    ; 00442293
    MOVSD ES:EDI,ESI                    ; 00442294
    CMP EBP,EAX                         ; 00442295
    JZ 0x004422ae                       ; 00442297
        ;   XREF to: 004422ae (CONDITIONAL_JUMP)  ; LAB_004422ae
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00442299
    MOV dword ptr [EBP],EAX             ; 0044229d
    MOV EAX,dword ptr [ESP + 0x50]      ; 004422a0
    MOV dword ptr [EBP + 0x4],EAX       ; 004422a4
    MOV EAX,dword ptr [ESP + 0x54]      ; 004422a7
    MOV dword ptr [EBP + 0x8],EAX       ; 004422ab
    IMUL EAX,dword ptr [ESP + 0x74],0x11c ; 004422ae
        ;   Label: LAB_004422ae
    ADD EAX,dword ptr [ESP + 0x70]      ; 004422b6
    PUSH EAX                            ; 004422ba
    LEA EAX,[ESP + 0x4]                 ; 004422bb
    PUSH EAX                            ; 004422bf
    LEA ESI,[ESP + 0x30]                ; 004422c0
    LEA EDI,[ESP + 0x3c]                ; 004422c4
    CALL core_dirmat.cpp_FUN_0045f700   ; 004422c8
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x30]                ; 004422cd
    ADD ESP,0x8                         ; 004422d1
    LEA EAX,[ESP + 0x34]                ; 004422d4
    MOVSD ES:EDI,ESI                    ; 004422d8
    MOVSD ES:EDI,ESI                    ; 004422d9
    MOVSD ES:EDI,ESI                    ; 004422da
    CMP EBX,EAX                         ; 004422db
    JZ 0x004422f3                       ; 004422dd
        ;   XREF to: 004422f3 (CONDITIONAL_JUMP)  ; LAB_004422f3
    MOV EAX,dword ptr [ESP + 0x34]      ; 004422df
    MOV dword ptr [EBX],EAX             ; 004422e3
    MOV EAX,dword ptr [ESP + 0x38]      ; 004422e5
    MOV dword ptr [EBX + 0x4],EAX       ; 004422e9
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004422ec
    MOV dword ptr [EBX + 0x8],EAX       ; 004422f0
    MOV ESI,dword ptr [ESP + 0x74]      ; 004422f3
        ;   Label: LAB_004422f3
    INC ESI                             ; 004422f7
    MOV dword ptr [ESP + 0x74],ESI      ; 004422f8
    MOV EAX,ESI                         ; 004422fc
    MOV ESI,dword ptr [ESP + 0x8c]      ; 004422fe
    MOV EDI,dword ptr [ESI + 0x104]     ; 00442305
    ADD EBX,0x11c                       ; 0044230b
    CMP EAX,EDI                         ; 00442311
    JL 0x00442268                       ; 00442313
        ;   XREF to: 00442268 (CONDITIONAL_JUMP)  ; LAB_00442268
    ADD ESP,0x78                        ; 00442319
        ;   Label: LAB_00442319
    POP EBP                             ; 0044231c
    POP EDI                             ; 0044231d
    POP ESI                             ; 0044231e
    POP EBX                             ; 0044231f
    RET                                 ; 00442320

