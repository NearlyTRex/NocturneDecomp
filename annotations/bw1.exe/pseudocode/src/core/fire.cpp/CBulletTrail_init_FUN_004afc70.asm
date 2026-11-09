; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletTrail_init_FUN_004afc70(CBulletTrail *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)
;
; Parameters:
; CBulletTrail *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_position
; CVector3f *      Stack[0xc]:4   end_position
; CKeyFramedModel * Stack[0x10]:4   model_ptr
; float            Stack[0x14]:4   segment_length
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004afc70
        ;   Label: core_fire.cpp_CBulletTrail_init_FUN_004afc70
    MOV EAX,dword ptr [ESP + 0x8]       ; 004afc71
    MOV EDX,dword ptr [ESP + 0xc]       ; 004afc75
    MOV ECX,dword ptr [ESP + 0x10]      ; 004afc79
    CMP EAX,EDX                         ; 004afc7d
    JNZ 0x004afc9f                      ; 004afc7f
        ;   XREF to: 004afc9f (CONDITIONAL_JUMP)  ; LAB_004afc9f
    LEA EDX,[EAX + 0xc]                 ; 004afc81
        ;   Label: LAB_004afc81
    CMP EDX,ECX                         ; 004afc84
    JNZ 0x004afcb1                      ; 004afc86
        ;   XREF to: 004afcb1 (CONDITIONAL_JUMP)  ; LAB_004afcb1
    MOV EDX,dword ptr [ESP + 0x14]      ; 004afc88
        ;   Label: LAB_004afc88
    MOV dword ptr [EAX + 0x20],0x2      ; 004afc8c
    MOV dword ptr [EAX + 0x18],EDX      ; 004afc93
    MOV EDX,dword ptr [ESP + 0x18]      ; 004afc96
    MOV dword ptr [EAX + 0x1c],EDX      ; 004afc9a
    POP EBX                             ; 004afc9d
    RET                                 ; 004afc9e
    MOV EBX,dword ptr [EDX]             ; 004afc9f
        ;   Label: LAB_004afc9f
    MOV dword ptr [EAX],EBX             ; 004afca1
    MOV EBX,dword ptr [EDX + 0x4]       ; 004afca3
    MOV dword ptr [EAX + 0x4],EBX       ; 004afca6
    MOV EBX,dword ptr [EDX + 0x8]       ; 004afca9
    MOV dword ptr [EAX + 0x8],EBX       ; 004afcac
    JMP 0x004afc81                      ; 004afcaf
        ;   XREF to: 004afc81 (UNCONDITIONAL_JUMP)  ; LAB_004afc81
    MOV EBX,dword ptr [ECX]             ; 004afcb1
        ;   Label: LAB_004afcb1
    MOV dword ptr [EDX],EBX             ; 004afcb3
    MOV EBX,dword ptr [ECX + 0x4]       ; 004afcb5
    MOV dword ptr [EDX + 0x4],EBX       ; 004afcb8
    MOV EBX,dword ptr [ECX + 0x8]       ; 004afcbb
    MOV dword ptr [EDX + 0x8],EBX       ; 004afcbe
    JMP 0x004afc88                      ; 004afcc1
        ;   XREF to: 004afc88 (UNCONDITIONAL_JUMP)  ; LAB_004afc88

