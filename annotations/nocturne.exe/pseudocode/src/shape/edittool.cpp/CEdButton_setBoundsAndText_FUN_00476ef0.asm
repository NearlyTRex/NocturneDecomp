; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_00476ef0(CEdButton *this_ptr,int left,int top,int right,int bottom,char *button_text)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   right
; int              Stack[0x14]:4   bottom
; char *           Stack[0x18]:4   button_text
;
; XREF[1]:
;   shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_00476eb0 at 00476ee2
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00476ef0
        ;   Label: shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00476ef0
    PUSH EDI                            ; 00476ef1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00476ef2
    MOV ESI,dword ptr [ESP + 0x20]      ; 00476ef6
    LEA EDI,[EDX + 0x18]                ; 00476efa
    PUSH EDI                            ; 00476efd
    MOV AL,byte ptr [ESI]               ; 00476efe
        ;   Label: LAB_00476efe
    MOV byte ptr [EDI],AL               ; 00476f00
    CMP AL,0x0                          ; 00476f02
    JZ 0x00476f16                       ; 00476f04
        ;   XREF to: 00476f16 (CONDITIONAL_JUMP)  ; LAB_00476f16
    MOV AL,byte ptr [ESI + 0x1]         ; 00476f06
    ADD ESI,0x2                         ; 00476f09
    MOV byte ptr [EDI + 0x1],AL         ; 00476f0c
    ADD EDI,0x2                         ; 00476f0f
    CMP AL,0x0                          ; 00476f12
    JNZ 0x00476efe                      ; 00476f14
        ;   XREF to: 00476efe (CONDITIONAL_JUMP)  ; LAB_00476efe
    POP EDI                             ; 00476f16
        ;   Label: LAB_00476f16
    MOV EDI,dword ptr [ESP + 0x10]      ; 00476f17
    MOV dword ptr [EDX + 0x4],EDI       ; 00476f1b
    MOV EDI,dword ptr [ESP + 0x14]      ; 00476f1e
    MOV dword ptr [EDX + 0x8],EDI       ; 00476f22
    MOV EDI,dword ptr [ESP + 0x18]      ; 00476f25
    MOV dword ptr [EDX + 0xc],EDI       ; 00476f29
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00476f2c
    MOV dword ptr [EDX + 0x10],EDI      ; 00476f30
    POP EDI                             ; 00476f33
    POP ESI                             ; 00476f34
    RET                                 ; 00476f35

