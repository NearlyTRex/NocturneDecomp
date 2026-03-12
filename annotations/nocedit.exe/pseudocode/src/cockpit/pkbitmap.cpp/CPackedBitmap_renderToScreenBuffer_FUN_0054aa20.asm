; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderToScreenBuffer_FUN_0054aa20(CPackedBitmap *this_ptr,int dest_x,int dest_y)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dest_x
; int              Stack[0xc]:4   dest_y
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054aa20
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_renderToScreenBuffer_FUN_0054aa20
    PUSH ESI                            ; 0054aa21
    PUSH EDI                            ; 0054aa22
    PUSH EBP                            ; 0054aa23
    SUB ESP,0x14                        ; 0054aa24
    MOV EAX,dword ptr [ESP + 0x28]      ; 0054aa27
    CMP dword ptr [EAX + 0x20],0x0      ; 0054aa2b
    JZ 0x0054aa37                       ; 0054aa2f
        ;   XREF to: 0054aa37 (CONDITIONAL_JUMP)  ; LAB_0054aa37
    CMP dword ptr [EAX + 0x14],0x0      ; 0054aa31
    JNZ 0x0054aa3f                      ; 0054aa35
        ;   XREF to: 0054aa3f (CONDITIONAL_JUMP)  ; LAB_0054aa3f
    ADD ESP,0x14                        ; 0054aa37
        ;   Label: LAB_0054aa37
    POP EBP                             ; 0054aa3a
    POP EDI                             ; 0054aa3b
    POP ESI                             ; 0054aa3c
    POP EBX                             ; 0054aa3d
    RET                                 ; 0054aa3e
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0054aa3f
        ;   Label: LAB_0054aa3f
    MOV ESI,dword ptr [0x0067939c]      ; 0054aa43 | g_BitsPerPixel
    IMUL EDX,ESI                        ; 0054aa49
    MOV EAX,EDX                         ; 0054aa4c
    SAR EDX,0x1f                        ; 0054aa4e
    SHL EDX,0x3                         ; 0054aa51
    SBB EAX,EDX                         ; 0054aa54
    SAR EAX,0x3                         ; 0054aa56
    XOR EBX,EBX                         ; 0054aa59
    MOV dword ptr [ESP],EAX             ; 0054aa5b
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760 ; 0054aa5e
        ;   XREF to: 00431760 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760()
    MOV dword ptr [ESP + 0x10],EAX      ; 0054aa63
    MOV EAX,dword ptr [ESP + 0x28]      ; 0054aa67
    XOR EBP,EBP                         ; 0054aa6b
    MOV dword ptr [ESP + 0xc],EBX       ; 0054aa6d
    MOV EAX,dword ptr [EAX + 0x20]      ; 0054aa71
    MOV dword ptr [ESP + 0x8],EBP       ; 0054aa74
    MOV EBX,dword ptr [ESP + 0x28]      ; 0054aa78
    MOV EDI,dword ptr [EAX]             ; 0054aa7c
    MOV EAX,dword ptr [ESP + 0x30]      ; 0054aa7e
    MOV EBX,dword ptr [EBX + 0x14]      ; 0054aa82
    SHL EAX,0x2                         ; 0054aa85
    ADD EBX,EDI                         ; 0054aa88
    MOV dword ptr [ESP + 0x4],EAX       ; 0054aa8a
    MOV EAX,dword ptr [ESP + 0x28]      ; 0054aa8e
        ;   Label: LAB_0054aa8e
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054aa92
    MOV EDI,dword ptr [ESP + 0x28]      ; 0054aa96
    MOV EAX,dword ptr [EAX + 0x20]      ; 0054aa9a
    MOV EBP,dword ptr [ESP + 0x4]       ; 0054aa9d
    ADD EAX,EDX                         ; 0054aaa1
    MOV ESI,dword ptr [ESP]             ; 0054aaa3
    MOV EDI,dword ptr [EDI + 0x14]      ; 0054aaa6
    MOV ECX,dword ptr [EAX + 0x4]       ; 0054aaa9
    MOV EBP,dword ptr [EBP + 0x2cf6a9c] ; 0054aaac | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EDI,ECX                         ; 0054aab2
    ADD EBP,ESI                         ; 0054aab4
    CMP EBX,EDI                         ; 0054aab6
    JNC 0x0054aaf5                      ; 0054aab8
        ;   XREF to: 0054aaf5 (CONDITIONAL_JUMP)  ; LAB_0054aaf5
    XOR EDX,EDX                         ; 0054aaba
        ;   Label: LAB_0054aaba
    MOV EAX,[0x0067939c]                ; 0054aabc | g_BitsPerPixel
    MOV DX,word ptr [EBX]               ; 0054aac1
    IMUL EDX,EAX                        ; 0054aac4
    MOV EAX,EDX                         ; 0054aac7
    SAR EDX,0x1f                        ; 0054aac9
    SHL EDX,0x3                         ; 0054aacc
    SBB EAX,EDX                         ; 0054aacf
    SAR EAX,0x3                         ; 0054aad1
    XOR ESI,ESI                         ; 0054aad4
    LEA ECX,[EBX + 0x4]                 ; 0054aad6
    MOV SI,word ptr [EBX + 0x2]         ; 0054aad9
    LEA EBX,[ESI + 0x3]                 ; 0054aadd
    PUSH ESI                            ; 0054aae0
    PUSH ECX                            ; 0054aae1
    ADD EAX,EBP                         ; 0054aae2
    AND BL,0xfc                         ; 0054aae4
    PUSH EAX                            ; 0054aae7
    ADD EBX,ECX                         ; 0054aae8
    CALL dword ptr [ESP + 0x1c]         ; 0054aaea
    ADD ESP,0xc                         ; 0054aaee
    CMP EBX,EDI                         ; 0054aaf1
    JC 0x0054aaba                       ; 0054aaf3
        ;   XREF to: 0054aaba (CONDITIONAL_JUMP)  ; LAB_0054aaba
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054aaf5
        ;   Label: LAB_0054aaf5
    MOV ECX,dword ptr [ESP + 0xc]       ; 0054aaf9
    MOV ESI,dword ptr [ESP + 0x4]       ; 0054aafd
    ADD EDX,0x4                         ; 0054ab01
    INC ECX                             ; 0054ab04
    MOV dword ptr [ESP + 0x8],EDX       ; 0054ab05
    MOV EDX,dword ptr [ESP + 0x28]      ; 0054ab09
    ADD ESI,0x4                         ; 0054ab0d
    MOV dword ptr [ESP + 0xc],ECX       ; 0054ab10
    MOV EDI,dword ptr [EDX + 0x1c]      ; 0054ab14
    MOV dword ptr [ESP + 0x4],ESI       ; 0054ab17
    CMP ECX,EDI                         ; 0054ab1b
    JGE 0x0054aa37                      ; 0054ab1d
        ;   XREF to: 0054aa37 (CONDITIONAL_JUMP)  ; LAB_0054aa37
    JMP 0x0054aa8e                      ; 0054ab23
        ;   XREF to: 0054aa8e (UNCONDITIONAL_JUMP)  ; LAB_0054aa8e

