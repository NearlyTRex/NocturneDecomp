; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack2_esi core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_005229b0(CMirrorReflection *this_ptr,CVector3f *input_vertex,CVector3f *output_vertex)
;
; Parameters:
; CMirrorReflection * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   input_vertex
; Local Variables:
; float[1009]      Stack[-0x100c]:4036  afStackY_100c
; CVector3f        Stack[-0x3c]:12  local_3c
; CVector3f        Stack[-0x30]:12  local_30
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; CVector3f        Stack[-0x18]:12  local_18
;
; XREF[1]:
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80 at 0056dcb9
;
; Referenced Globals:
;   float g_MirrorProjectionScale = 256
;   float g_MirrorIntToFloat_Coarse = 0.00390625
;
; Called Functions:
;   core_mirror.cpp_CMirrorReflection_applyMirrorTransform_FUN_005222f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005229b0
        ;   Label: core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_005229b0
    PUSH EDI                            ; 005229b1
    PUSH EBP                            ; 005229b2
    SUB ESP,0x30                        ; 005229b3
    MOV EAX,dword ptr [ESP + 0x44]      ; 005229b6
    MOV EBP,ESI                         ; 005229ba
    MOV EBX,ESP                         ; 005229bc
    FILD dword ptr [EAX]                ; 005229be
    FMUL float ptr [0x006616e8]         ; 005229c0 | g_MirrorIntToFloat_Coarse
    FSTP float ptr [EBX]                ; 005229c6
    FILD dword ptr [EAX + 0x4]          ; 005229c8
    FMUL float ptr [0x006616e8]         ; 005229cb | g_MirrorIntToFloat_Coarse
    FSTP float ptr [EBX + 0x4]          ; 005229d1
    FILD dword ptr [EAX + 0x8]          ; 005229d4
    FMUL float ptr [0x006616e8]         ; 005229d7 | g_MirrorIntToFloat_Coarse
    FSTP float ptr [EBX + 0x8]          ; 005229dd
    MOV EAX,ESP                         ; 005229e0
    PUSH EAX                            ; 005229e2
    LEA EAX,[ESP + 0x28]                ; 005229e3
    PUSH EAX                            ; 005229e7
    MOV EDX,dword ptr [ESP + 0x48]      ; 005229e8
    PUSH EDX                            ; 005229ec
    CALL core_mirror.cpp_CMirrorReflection_applyMirrorTransform_FUN_005222f0 ; 005229ed
        ;   XREF to: 005222f0 (UNCONDITIONAL_CALL)  ; CVector3f * core_mirror.cpp_CMirrorReflection_applyMirrorTransform_FUN_005222f0(CMirrorReflection * this_ptr, CVector3f * output_buffer, CVector3f * input_vector)
    MOV EDX,EAX                         ; 005229f2
    LEA EAX,[ESP + 0x18]                ; 005229f4
    ADD ESP,0xc                         ; 005229f8
    CMP EAX,EDX                         ; 005229fb
    JZ 0x00522a13                       ; 005229fd
        ;   XREF to: 00522a13 (CONDITIONAL_JUMP)  ; LAB_00522a13
    MOV EAX,dword ptr [EDX]             ; 005229ff
    MOV dword ptr [ESP + 0xc],EAX       ; 00522a01
    MOV EAX,dword ptr [EDX + 0x4]       ; 00522a05
    MOV dword ptr [ESP + 0x10],EAX      ; 00522a08
    MOV EAX,dword ptr [EDX + 0x8]       ; 00522a0c
    MOV dword ptr [ESP + 0x14],EAX      ; 00522a0f
    LEA EBX,[ESP + 0x18]                ; 00522a13
        ;   Label: LAB_00522a13
    LEA EAX,[ESP + 0xc]                 ; 00522a17
    LEA ESI,[ESP + 0x18]                ; 00522a1b
    MOV EDI,EBP                         ; 00522a1f
    FLD float ptr [EAX]                 ; 00522a21
    FMUL float ptr [0x006616e0]         ; 00522a23 | g_MirrorProjectionScale
    FISTP dword ptr [EBX]               ; 00522a29
    FLD float ptr [EAX + 0x4]           ; 00522a2b
    FMUL float ptr [0x006616e0]         ; 00522a2e | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x4]         ; 00522a34
    FLD float ptr [EAX + 0x8]           ; 00522a37
    FMUL float ptr [0x006616e0]         ; 00522a3a | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x8]         ; 00522a40
    MOVSD ES:EDI,ESI                    ; 00522a43
    MOVSD ES:EDI,ESI                    ; 00522a44
    MOVSD ES:EDI,ESI                    ; 00522a45
    MOV EAX,EBP                         ; 00522a46
    ADD ESP,0x30                        ; 00522a48
    POP EBP                             ; 00522a4b
    POP EDI                             ; 00522a4c
    POP EBX                             ; 00522a4d
    RET                                 ; 00522a4e

