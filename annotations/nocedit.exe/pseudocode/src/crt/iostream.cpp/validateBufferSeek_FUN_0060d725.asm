; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_iostream.cpp_validateBufferSeek_FUN_0060d725(int seek_distance, int whence, char * buffer_start, char * current_ptr, char * buffer_end1, char * buffer_end2)
;
; Parameters:
; int              Stack[0x4]:4   seek_distance
; int              Stack[0x8]:4   whence
; char *           Stack[0xc]:4   buffer_start
; char *           Stack[0x10]:4   current_ptr
; char *           Stack[0x14]:4   buffer_end1
; char *           Stack[0x18]:4   buffer_end2
;
; XREF[1]:
;   crt_strstream.cpp_strstreambuf_seekoff_FUN_0060ba80 at 0060bb11
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060d725
        ;   Label: crt_iostream.cpp_validateBufferSeek_FUN_0060d725
    PUSH EDI                            ; 0060d726
    MOV EAX,dword ptr [ESP + 0xc]       ; 0060d727
    MOV ECX,dword ptr [ESP + 0x10]      ; 0060d72b
    MOV EDX,dword ptr [ESP + 0x20]      ; 0060d72f
    MOV EBX,dword ptr [ESP + 0x14]      ; 0060d733
    SUB EDX,EBX                         ; 0060d737
    TEST ECX,ECX                        ; 0060d739
    JNZ 0x0060d749                      ; 0060d73b | LAB_0060d749
        ;   XREF to: 0060d749 (CONDITIONAL_JUMP)
    CMP EAX,EDX                         ; 0060d73d
    JLE 0x0060d746                      ; 0060d73f | LAB_0060d746
        ;   XREF to: 0060d746 (CONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 0060d741
        ;   Label: LAB_0060d741
    POP EDI                             ; 0060d746
        ;   Label: LAB_0060d746
    POP EBX                             ; 0060d747
    RET                                 ; 0060d748
    CMP ECX,0x2                         ; 0060d749
        ;   Label: LAB_0060d749
    JNZ 0x0060d761                      ; 0060d74c | LAB_0060d761
        ;   XREF to: 0060d761 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0060d74e
    NEG EAX                             ; 0060d752
    SUB EDX,EBX                         ; 0060d754
    CMP EAX,EDX                         ; 0060d756
    JG 0x0060d741                       ; 0060d758 | LAB_0060d741
        ;   XREF to: 0060d741 (CONDITIONAL_JUMP)
    SUB EDX,EAX                         ; 0060d75a
        ;   Label: LAB_0060d75a
    MOV EAX,EDX                         ; 0060d75c
        ;   Label: LAB_0060d75c
    POP EDI                             ; 0060d75e
    POP EBX                             ; 0060d75f
    RET                                 ; 0060d760
    CMP ECX,0x1                         ; 0060d761
        ;   Label: LAB_0060d761
    JNZ 0x0060d741                      ; 0060d764 | LAB_0060d741
        ;   XREF to: 0060d741 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x18]      ; 0060d766
    MOV ECX,dword ptr [ESP + 0x20]      ; 0060d76a
    MOV EDI,dword ptr [ESP + 0x18]      ; 0060d76e
    SUB EDX,EBX                         ; 0060d772
    SUB ECX,EDI                         ; 0060d774
    TEST EAX,EAX                        ; 0060d776
    JL 0x0060d785                       ; 0060d778 | LAB_0060d785
        ;   XREF to: 0060d785 (CONDITIONAL_JUMP)
    JLE 0x0060d75c                      ; 0060d77a | LAB_0060d75c
        ;   XREF to: 0060d75c (CONDITIONAL_JUMP)
    CMP EAX,ECX                         ; 0060d77c
    JG 0x0060d741                       ; 0060d77e | LAB_0060d741
        ;   XREF to: 0060d741 (CONDITIONAL_JUMP)
    ADD EAX,EDX                         ; 0060d780
    POP EDI                             ; 0060d782
    POP EBX                             ; 0060d783
    RET                                 ; 0060d784
    NEG EAX                             ; 0060d785
        ;   Label: LAB_0060d785
    CMP EAX,EDX                         ; 0060d787
    JLE 0x0060d75a                      ; 0060d789 | LAB_0060d75a
        ;   XREF to: 0060d75a (CONDITIONAL_JUMP)
    JMP 0x0060d741                      ; 0060d78b | LAB_0060d741
        ;   XREF to: 0060d741 (UNCONDITIONAL_JUMP)

