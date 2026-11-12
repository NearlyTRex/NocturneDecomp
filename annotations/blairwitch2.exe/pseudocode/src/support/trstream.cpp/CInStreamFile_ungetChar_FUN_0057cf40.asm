; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trstream_cpp_CInStreamFile_ungetChar_FUN_0057cf40(CInStreamFile *this_ptr,int param_2)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057cf40
        ;   Label: support_trstream.cpp_CInStreamFile_ungetChar_FUN_0057cf40
    MOV EDX,dword ptr [ESP + 0x8]       ; 0057cf41
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057cf45
    TEST EAX,EAX                        ; 0057cf49
    JL 0x0057cf71                       ; 0057cf4b
        ;   XREF to: 0057cf71 (CONDITIONAL_JUMP)  ; LAB_0057cf71
    CMP EAX,0xff                        ; 0057cf4d
    JG 0x0057cf71                       ; 0057cf52
        ;   XREF to: 0057cf71 (CONDITIONAL_JUMP)  ; LAB_0057cf71
    CMP dword ptr [EDX + 0x4],0x0       ; 0057cf54
    JZ 0x0057cf71                       ; 0057cf58
        ;   XREF to: 0057cf71 (CONDITIONAL_JUMP)  ; LAB_0057cf71
    MOV EBX,dword ptr [EDX + 0x10]      ; 0057cf5a
    TEST EBX,EBX                        ; 0057cf5d
    JLE 0x0057cf71                      ; 0057cf5f
        ;   XREF to: 0057cf71 (CONDITIONAL_JUMP)  ; LAB_0057cf71
    PUSH ESI                            ; 0057cf61
    MOV EAX,0x1                         ; 0057cf62
    MOV ESI,EBX                         ; 0057cf67
    SUB ESI,EAX                         ; 0057cf69
    MOV dword ptr [EDX + 0x10],ESI      ; 0057cf6b
    POP ESI                             ; 0057cf6e
    POP EBX                             ; 0057cf6f
    RET                                 ; 0057cf70
    XOR EAX,EAX                         ; 0057cf71
        ;   Label: LAB_0057cf71
    POP EBX                             ; 0057cf73
    RET                                 ; 0057cf74

