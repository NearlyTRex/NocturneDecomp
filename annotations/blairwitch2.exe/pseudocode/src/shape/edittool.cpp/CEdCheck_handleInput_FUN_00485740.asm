; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEdCheck_handleInput_FUN_00485740(CEdCheck *this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   void* g_ActiveControl
;   int g_MouseX
;   int g_MouseY
;   _BIT_INTEGER32 g_MouseButtonFlags
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485740
        ;   Label: shape_edittool.cpp_CEdCheck_handleInput_FUN_00485740
    MOV ECX,dword ptr [0x01c26410]      ; 00485741 | g_ActiveControl
    MOV EAX,dword ptr [ESP + 0x8]       ; 00485747
    CMP dword ptr [EAX + 0x8],0x0       ; 0048574b
    JZ 0x004857a4                       ; 0048574f
        ;   XREF to: 004857a4 (CONDITIONAL_JUMP)  ; LAB_004857a4
    XOR EDX,EDX                         ; 00485751
        ;   Label: LAB_00485751
    CMP ECX,EAX                         ; 00485753
        ;   Label: LAB_00485753
    JNZ 0x00485806                      ; 00485755
        ;   XREF to: 00485806 (CONDITIONAL_JUMP)  ; LAB_00485806
    MOV BH,byte ptr [0x01c2a384]        ; 0048575b | g_MouseButtonFlags
    MOV dword ptr [EAX + 0x20],EDX      ; 00485761
    TEST BH,0x1                         ; 00485764
    JNZ 0x004857fc                      ; 00485767
        ;   XREF to: 004857fc (CONDITIONAL_JUMP)  ; LAB_004857fc
    XOR ECX,EAX                         ; 0048576d
    TEST EDX,EDX                        ; 0048576f
    JZ 0x004857fc                       ; 00485771
        ;   XREF to: 004857fc (CONDITIONAL_JUMP)  ; LAB_004857fc
    PUSH EDI                            ; 00485777
    MOV EBX,dword ptr [EAX]             ; 00485778
    MOV dword ptr [EAX + 0x20],0x0      ; 0048577a
    CMP EBX,0x1                         ; 00485781
    JZ 0x004857da                       ; 00485784
        ;   XREF to: 004857da (CONDITIONAL_JUMP)  ; LAB_004857da
    CMP dword ptr [EAX + 0x4],0x0       ; 00485786
    SETZ DL                             ; 0048578a
    AND EDX,0xff                        ; 0048578d
    MOV dword ptr [EAX + 0x4],EDX       ; 00485793
    MOV EAX,0x1                         ; 00485796
        ;   Label: LAB_00485796
    POP EDI                             ; 0048579b
    MOV dword ptr [0x01c26410],ECX      ; 0048579c | g_ActiveControl
    POP EBX                             ; 004857a2
    RET                                 ; 004857a3
    MOV EDX,dword ptr [0x01c2a37c]      ; 004857a4 | g_MouseX
        ;   Label: LAB_004857a4
    CMP EDX,dword ptr [EAX + 0x10]      ; 004857aa
    JL 0x00485751                       ; 004857ad
        ;   XREF to: 00485751 (CONDITIONAL_JUMP)  ; LAB_00485751
    MOV EDX,dword ptr [0x01c2a380]      ; 004857af | g_MouseY
    CMP EDX,dword ptr [EAX + 0x14]      ; 004857b5
    JL 0x00485751                       ; 004857b8
        ;   XREF to: 00485751 (CONDITIONAL_JUMP)  ; LAB_00485751
    MOV EDX,dword ptr [0x01c2a37c]      ; 004857ba | g_MouseX
    CMP EDX,dword ptr [EAX + 0x18]      ; 004857c0
    JGE 0x00485751                      ; 004857c3
        ;   XREF to: 00485751 (CONDITIONAL_JUMP)  ; LAB_00485751
    MOV EDX,dword ptr [0x01c2a380]      ; 004857c5 | g_MouseY
    CMP EDX,dword ptr [EAX + 0x1c]      ; 004857cb
    JGE 0x00485751                      ; 004857ce
        ;   XREF to: 00485751 (CONDITIONAL_JUMP)  ; LAB_00485751
    MOV EDX,0x1                         ; 004857d0
    JMP 0x00485753                      ; 004857d5
        ;   XREF to: 00485753 (UNCONDITIONAL_JUMP)  ; LAB_00485753
    MOV EDI,dword ptr [EAX + 0x4]       ; 004857da
        ;   Label: LAB_004857da
    ADD EDI,EBX                         ; 004857dd
    MOV dword ptr [EAX + 0x4],EDI       ; 004857df
    CMP EDI,0x2                         ; 004857e2
    JLE 0x00485796                      ; 004857e5
        ;   XREF to: 00485796 (CONDITIONAL_JUMP)  ; LAB_00485796
    MOV dword ptr [EAX + 0x4],0x0       ; 004857e7
    MOV EAX,0x1                         ; 004857ee
    POP EDI                             ; 004857f3
    MOV dword ptr [0x01c26410],ECX      ; 004857f4 | g_ActiveControl
    POP EBX                             ; 004857fa
    RET                                 ; 004857fb
    XOR EAX,EAX                         ; 004857fc
        ;   Label: LAB_004857fc
    MOV dword ptr [0x01c26410],ECX      ; 004857fe | g_ActiveControl
    POP EBX                             ; 00485804
    RET                                 ; 00485805
    TEST ECX,ECX                        ; 00485806
        ;   Label: LAB_00485806
    JNZ 0x00485817                      ; 00485808
        ;   XREF to: 00485817 (CONDITIONAL_JUMP)  ; LAB_00485817
    TEST byte ptr [0x01c2a384],0x1      ; 0048580a | g_MouseButtonFlags
    JZ 0x00485817                       ; 00485811
        ;   XREF to: 00485817 (CONDITIONAL_JUMP)  ; LAB_00485817
    TEST EDX,EDX                        ; 00485813
    JNZ 0x00485821                      ; 00485815
        ;   XREF to: 00485821 (CONDITIONAL_JUMP)  ; LAB_00485821
    XOR EAX,EAX                         ; 00485817
        ;   Label: LAB_00485817
    MOV dword ptr [0x01c26410],ECX      ; 00485819 | g_ActiveControl
    POP EBX                             ; 0048581f
    RET                                 ; 00485820
    MOV ECX,EAX                         ; 00485821
        ;   Label: LAB_00485821
    MOV dword ptr [EAX + 0x20],0x1      ; 00485823
    XOR EAX,EAX                         ; 0048582a
    MOV dword ptr [0x01c26410],ECX      ; 0048582c | g_ActiveControl
    POP EBX                             ; 00485832
    RET                                 ; 00485833

