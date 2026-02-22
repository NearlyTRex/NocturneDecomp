; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_00471770(CDemonGlobe *this_ptr,CVector3f *reference_position,CMatrix3x3f *rotation_matrix,CVector3f *aabb_min,CVector3f *aabb_max)
;
; Parameters:
; CDemonGlobe *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   reference_position
; CMatrix3x3f *    Stack[0xc]:4   rotation_matrix
; CVector3f *      Stack[0x10]:4   aabb_min
; CVector3f *      Stack[0x14]:4   aabb_max
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_set.cpp_CDemonSet_gatherVisibleLights_FUN_0056d4a0 at 0056d807
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471770
        ;   Label: core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_00471770
    PUSH ESI                            ; 00471771
    PUSH EDI                            ; 00471772
    SUB ESP,0x18                        ; 00471773
    MOV EBX,dword ptr [ESP + 0x28]      ; 00471776
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0047177a
    MOV ESI,dword ptr [ESP + 0x34]      ; 0047177e
    MOV EDI,dword ptr [ESP + 0x38]      ; 00471782
    LEA EAX,[EBX + 0x24]                ; 00471786
    FLD float ptr [EAX]                 ; 00471789
    FSUB float ptr [EDX]                ; 0047178b
    FSTP float ptr [ESP]                ; 0047178d
    FLD float ptr [EAX + 0x4]           ; 00471790
    FSUB float ptr [EDX + 0x4]          ; 00471793
    FSTP float ptr [ESP + 0x4]          ; 00471796
    FLD float ptr [EAX + 0x8]           ; 0047179a
    MOV EAX,ESP                         ; 0047179d
    PUSH EAX                            ; 0047179f
    LEA EAX,[ESP + 0x10]                ; 004717a0
    PUSH EAX                            ; 004717a4
    FSUB float ptr [EDX + 0x8]          ; 004717a5
    MOV EDX,dword ptr [ESP + 0x38]      ; 004717a8
    PUSH EDX                            ; 004717ac
    FSTP float ptr [ESP + 0x14]         ; 004717ad
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 004717b1
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 004717b6
    LEA EAX,[ESP + 0xc]                 ; 004717b8
    ADD ESP,0xc                         ; 004717bc
    CMP EAX,EDX                         ; 004717bf
    JNZ 0x00471822                      ; 004717c1
        ;   XREF to: 00471822 (CONDITIONAL_JUMP)  ; LAB_00471822
    FLD float ptr [ESP]                 ; 004717c3
        ;   Label: LAB_004717c3
    FADD float ptr [EBX + 0x30]         ; 004717c6
    FCOMP float ptr [ESI]               ; 004717c9
    FNSTSW AX                           ; 004717cb
    SAHF                                ; 004717cd
    JC 0x00471819                       ; 004717ce
        ;   XREF to: 00471819 (CONDITIONAL_JUMP)  ; LAB_00471819
    FLD float ptr [ESP + 0x4]           ; 004717d0
    FADD float ptr [EBX + 0x30]         ; 004717d4
    FCOMP float ptr [ESI + 0x4]         ; 004717d7
    FNSTSW AX                           ; 004717da
    SAHF                                ; 004717dc
    JC 0x00471819                       ; 004717dd
        ;   XREF to: 00471819 (CONDITIONAL_JUMP)  ; LAB_00471819
    FLD float ptr [ESP + 0x8]           ; 004717df
    FADD float ptr [EBX + 0x30]         ; 004717e3
    FCOMP float ptr [ESI + 0x8]         ; 004717e6
    FNSTSW AX                           ; 004717e9
    SAHF                                ; 004717eb
    JC 0x00471819                       ; 004717ec
        ;   XREF to: 00471819 (CONDITIONAL_JUMP)  ; LAB_00471819
    FLD float ptr [ESP]                 ; 004717ee
    FSUB float ptr [EBX + 0x30]         ; 004717f1
    FCOMP float ptr [EDI]               ; 004717f4
    FNSTSW AX                           ; 004717f6
    SAHF                                ; 004717f8
    JA 0x00471819                       ; 004717f9
        ;   XREF to: 00471819 (CONDITIONAL_JUMP)  ; LAB_00471819
    FLD float ptr [ESP + 0x4]           ; 004717fb
    FSUB float ptr [EBX + 0x30]         ; 004717ff
    FCOMP float ptr [EDI + 0x4]         ; 00471802
    FNSTSW AX                           ; 00471805
    SAHF                                ; 00471807
    JA 0x00471819                       ; 00471808
        ;   XREF to: 00471819 (CONDITIONAL_JUMP)  ; LAB_00471819
    FLD float ptr [ESP + 0x8]           ; 0047180a
    FSUB float ptr [EBX + 0x30]         ; 0047180e
    FCOMP float ptr [EDI + 0x8]         ; 00471811
    FNSTSW AX                           ; 00471814
    SAHF                                ; 00471816
    JBE 0x00471837                      ; 00471817
        ;   XREF to: 00471837 (CONDITIONAL_JUMP)  ; LAB_00471837
    XOR EAX,EAX                         ; 00471819
        ;   Label: LAB_00471819
    ADD ESP,0x18                        ; 0047181b
    POP EDI                             ; 0047181e
    POP ESI                             ; 0047181f
    POP EBX                             ; 00471820
    RET                                 ; 00471821
    MOV EAX,dword ptr [EDX]             ; 00471822
        ;   Label: LAB_00471822
    MOV dword ptr [ESP],EAX             ; 00471824
    MOV EAX,dword ptr [EDX + 0x4]       ; 00471827
    MOV dword ptr [ESP + 0x4],EAX       ; 0047182a
    MOV EAX,dword ptr [EDX + 0x8]       ; 0047182e
    MOV dword ptr [ESP + 0x8],EAX       ; 00471831
    JMP 0x004717c3                      ; 00471835
        ;   XREF to: 004717c3 (UNCONDITIONAL_JUMP)  ; LAB_004717c3
    MOV EAX,0x1                         ; 00471837
        ;   Label: LAB_00471837
    ADD ESP,0x18                        ; 0047183c
    POP EDI                             ; 0047183f
    POP ESI                             ; 00471840
    POP EBX                             ; 00471841
    RET                                 ; 00471842

