; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletTrail_init_FUN_0049aca0(CBulletTrail *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)
;
; Parameters:
; CBulletTrail *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_position
; CVector3f *      Stack[0xc]:4   end_position
; CKeyFramedModel * Stack[0x10]:4   model_ptr
; float            Stack[0x14]:4   segment_length
;
; XREF[1]:
;   core_fire.cpp_FUN_004a27de at 004a2824
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049aca0
        ;   Label: core_fire.cpp_CBulletTrail_init_FUN_0049aca0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049aca1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049aca5
    MOV ECX,dword ptr [ESP + 0x10]      ; 0049aca9
    CMP EAX,EDX                         ; 0049acad
    JNZ 0x0049accf                      ; 0049acaf
        ;   XREF to: 0049accf (CONDITIONAL_JUMP)  ; LAB_0049accf
    LEA EDX,[EAX + 0xc]                 ; 0049acb1
        ;   Label: LAB_0049acb1
    CMP EDX,ECX                         ; 0049acb4
    JNZ 0x0049ace1                      ; 0049acb6
        ;   XREF to: 0049ace1 (CONDITIONAL_JUMP)  ; LAB_0049ace1
    MOV EDX,dword ptr [ESP + 0x14]      ; 0049acb8
        ;   Label: LAB_0049acb8
    MOV dword ptr [EAX + 0x20],0x2      ; 0049acbc
    MOV dword ptr [EAX + 0x18],EDX      ; 0049acc3
    MOV EDX,dword ptr [ESP + 0x18]      ; 0049acc6
    MOV dword ptr [EAX + 0x1c],EDX      ; 0049acca
    POP EBX                             ; 0049accd
    RET                                 ; 0049acce
    MOV EBX,dword ptr [EDX]             ; 0049accf
        ;   Label: LAB_0049accf
    MOV dword ptr [EAX],EBX             ; 0049acd1
    MOV EBX,dword ptr [EDX + 0x4]       ; 0049acd3
    MOV dword ptr [EAX + 0x4],EBX       ; 0049acd6
    MOV EBX,dword ptr [EDX + 0x8]       ; 0049acd9
    MOV dword ptr [EAX + 0x8],EBX       ; 0049acdc
    JMP 0x0049acb1                      ; 0049acdf
        ;   XREF to: 0049acb1 (UNCONDITIONAL_JUMP)  ; LAB_0049acb1
    MOV EBX,dword ptr [ECX]             ; 0049ace1
        ;   Label: LAB_0049ace1
    MOV dword ptr [EDX],EBX             ; 0049ace3
    MOV EBX,dword ptr [ECX + 0x4]       ; 0049ace5
    MOV dword ptr [EDX + 0x4],EBX       ; 0049ace8
    MOV EBX,dword ptr [ECX + 0x8]       ; 0049aceb
    MOV dword ptr [EDX + 0x8],EBX       ; 0049acee
    JMP 0x0049acb8                      ; 0049acf1
        ;   XREF to: 0049acb8 (UNCONDITIONAL_JUMP)  ; LAB_0049acb8

