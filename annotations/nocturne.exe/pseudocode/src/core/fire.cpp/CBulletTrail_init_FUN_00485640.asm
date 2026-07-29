; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletTrail_init_FUN_00485640(CBulletTrail *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)
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

    PUSH EBX                            ; 00485640
        ;   Label: core_fire.cpp_CBulletTrail_init_FUN_00485640
    MOV EAX,dword ptr [ESP + 0x8]       ; 00485641
    MOV EDX,dword ptr [ESP + 0xc]       ; 00485645
    MOV ECX,dword ptr [ESP + 0x10]      ; 00485649
    CMP EAX,EDX                         ; 0048564d
    JNZ 0x0048566f                      ; 0048564f
        ;   XREF to: 0048566f (CONDITIONAL_JUMP)  ; LAB_0048566f
    LEA EDX,[EAX + 0xc]                 ; 00485651
        ;   Label: LAB_00485651
    CMP EDX,ECX                         ; 00485654
    JNZ 0x00485681                      ; 00485656
        ;   XREF to: 00485681 (CONDITIONAL_JUMP)  ; LAB_00485681
    MOV EDX,dword ptr [ESP + 0x14]      ; 00485658
        ;   Label: LAB_00485658
    MOV dword ptr [EAX + 0x20],0x2      ; 0048565c
    MOV dword ptr [EAX + 0x18],EDX      ; 00485663
    MOV EDX,dword ptr [ESP + 0x18]      ; 00485666
    MOV dword ptr [EAX + 0x1c],EDX      ; 0048566a
    POP EBX                             ; 0048566d
    RET                                 ; 0048566e
    MOV EBX,dword ptr [EDX]             ; 0048566f
        ;   Label: LAB_0048566f
    MOV dword ptr [EAX],EBX             ; 00485671
    MOV EBX,dword ptr [EDX + 0x4]       ; 00485673
    MOV dword ptr [EAX + 0x4],EBX       ; 00485676
    MOV EBX,dword ptr [EDX + 0x8]       ; 00485679
    MOV dword ptr [EAX + 0x8],EBX       ; 0048567c
    JMP 0x00485651                      ; 0048567f
        ;   XREF to: 00485651 (UNCONDITIONAL_JUMP)  ; LAB_00485651
    MOV EBX,dword ptr [ECX]             ; 00485681
        ;   Label: LAB_00485681
    MOV dword ptr [EDX],EBX             ; 00485683
    MOV EBX,dword ptr [ECX + 0x4]       ; 00485685
    MOV dword ptr [EDX + 0x4],EBX       ; 00485688
    MOV EBX,dword ptr [ECX + 0x8]       ; 0048568b
    MOV dword ptr [EDX + 0x8],EBX       ; 0048568e
    JMP 0x00485658                      ; 00485691
        ;   XREF to: 00485658 (UNCONDITIONAL_JUMP)  ; LAB_00485658

