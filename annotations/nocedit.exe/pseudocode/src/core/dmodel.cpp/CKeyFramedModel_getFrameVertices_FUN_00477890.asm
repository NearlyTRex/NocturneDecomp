; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(CKeyFramedModel * this_ptr, int frame_index)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
;
; XREF[6]:
;   core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0 at 00478276
;   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0 at 004778ec
;   core_frankgen.cpp_LoadModel_FUN_004d2190 at 004d2209
;   core_morph.cpp_CMorphModel_FUN_0052a8d0 at 0052a8fa
;   core_morph.cpp_FUN_0052aa80 at 0052aa95
;   core_turret.cpp_CTurret_FUN_005e2240 at 005e2285
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00477890
        ;   Label: core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
    MOV EAX,dword ptr [ESP + 0x8]       ; 00477894
    MOV EDX,dword ptr [ECX + 0x100]     ; 00477898
    CMP EAX,EDX                         ; 0047789e
    JL 0x004778a5                       ; 004778a0
        ;   XREF to: 004778a5 (CONDITIONAL_JUMP)  ; LAB_004778a5
    LEA EAX,[EDX + -0x1]                ; 004778a2
    TEST EAX,EAX                        ; 004778a5
        ;   Label: LAB_004778a5
    JL 0x004778cb                       ; 004778a7
        ;   XREF to: 004778cb (CONDITIONAL_JUMP)  ; LAB_004778cb
    MOV EDX,dword ptr [ECX + 0x104]     ; 004778a9
        ;   Label: LAB_004778a9
    IMUL EDX,EAX                        ; 004778af
    LEA EAX,[EDX*0x4 + 0x0]             ; 004778b2
    SUB EAX,EDX                         ; 004778b9
    LEA EDX,[EAX*0x4 + 0x0]             ; 004778bb
    MOV EAX,dword ptr [ECX + 0x10c]     ; 004778c2
    ADD EAX,EDX                         ; 004778c8
    RET                                 ; 004778ca
    XOR EAX,EAX                         ; 004778cb
        ;   Label: LAB_004778cb
    JMP 0x004778a9                      ; 004778cd
        ;   XREF to: 004778a9 (UNCONDITIONAL_JUMP)  ; LAB_004778a9

