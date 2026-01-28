; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int __watcallStack crt_strstream_cpp_strstreambuf_seekoff_FUN_0060ba80 (strstreambuf *this_ptr,int seek_distance,int seek_mode,int flags)
;
; Parameters:
; strstreambuf *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   seek_distance
; int              Stack[0xc]:4   seek_mode
; int              Stack[0x10]:4   flags
;
; Called Functions:
;   crt_iostream.cpp_validateBufferSeek_FUN_0060d725
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060ba80
        ;   Label: crt_strstream.cpp_strstreambuf_seekoff_FUN_0060ba80
    PUSH ESI                            ; 0060ba81
    PUSH EDI                            ; 0060ba82
    PUSH EBP                            ; 0060ba83
    MOV EBP,ESP                         ; 0060ba84
    MOV EBX,dword ptr [EBP + 0x14]      ; 0060ba86
    MOV EDX,dword ptr [EBP + 0x20]      ; 0060ba89
    AND EDX,0x3                         ; 0060ba8c
    MOV dword ptr [EBP + 0x20],EDX      ; 0060ba8f
    JZ 0x0060bb45                       ; 0060ba92
        ;   XREF to: 0060bb45 (CONDITIONAL_JUMP)  ; LAB_0060bb45
    CMP dword ptr [EBP + 0x1c],0x1      ; 0060ba98
    JNZ 0x0060baa7                      ; 0060ba9c
        ;   XREF to: 0060baa7 (CONDITIONAL_JUMP)  ; LAB_0060baa7
    CMP EDX,0x3                         ; 0060ba9e
    JZ 0x0060bb45                       ; 0060baa1
        ;   XREF to: 0060bb45 (CONDITIONAL_JUMP)  ; LAB_0060bb45
    TEST byte ptr [EBP + 0x20],0x1      ; 0060baa7
        ;   Label: LAB_0060baa7
    JZ 0x0060baf6                       ; 0060baab
        ;   XREF to: 0060baf6 (CONDITIONAL_JUMP)  ; LAB_0060baf6
    MOV EAX,dword ptr [EBX + 0x20]      ; 0060baad
    MOV EDX,EAX                         ; 0060bab0
    TEST EAX,EAX                        ; 0060bab2
    JNZ 0x0060bb4f                      ; 0060bab4
        ;   XREF to: 0060bb4f (CONDITIONAL_JUMP)  ; LAB_0060bb4f
    MOV EDX,dword ptr [EBX + 0x10]      ; 0060baba
        ;   Label: LAB_0060baba
    PUSH EDX                            ; 0060babd
        ;   Label: LAB_0060babd
    MOV EAX,dword ptr [EBX + 0x10]      ; 0060babe
    PUSH EAX                            ; 0060bac1
    MOV EAX,dword ptr [EBX + 0x14]      ; 0060bac2
    PUSH EAX                            ; 0060bac5
    MOV EAX,dword ptr [EBX + 0xc]       ; 0060bac6
    PUSH EAX                            ; 0060bac9
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0060baca
    PUSH EDX                            ; 0060bacd
    MOV ECX,dword ptr [EBP + 0x18]      ; 0060bace
    PUSH ECX                            ; 0060bad1
    CALL crt_iostream.cpp_validateBufferSeek_FUN_0060d725 ; 0060bad2
        ;   XREF to: 0060d725 (UNCONDITIONAL_CALL)  ; int crt_iostream.cpp_validateBufferSeek_FUN_0060d725(int seek_distance, int whence, char * buffer_start, char * current_ptr, ...)
    ADD ESP,0x18                        ; 0060bad7
    MOV ECX,EAX                         ; 0060bada
    CMP EAX,-0x1                        ; 0060badc
    JZ 0x0060baf6                       ; 0060badf
        ;   XREF to: 0060baf6 (CONDITIONAL_JUMP)  ; LAB_0060baf6
    MOV EDX,dword ptr [EBX + 0xc]       ; 0060bae1
    MOV ESI,dword ptr [EBX + 0x10]      ; 0060bae4
    ADD EAX,EDX                         ; 0060bae7
    CMP EAX,ESI                         ; 0060bae9
    JBE 0x0060baf0                      ; 0060baeb
        ;   XREF to: 0060baf0 (CONDITIONAL_JUMP)  ; LAB_0060baf0
    MOV ESI,dword ptr [EBX + 0x1c]      ; 0060baed
    MOV dword ptr [EBX + 0x14],EAX      ; 0060baf0
        ;   Label: LAB_0060baf0
    MOV dword ptr [EBX + 0x10],ESI      ; 0060baf3
    TEST byte ptr [EBP + 0x20],0x2      ; 0060baf6
        ;   Label: LAB_0060baf6
    JZ 0x0060bb3e                       ; 0060bafa
        ;   XREF to: 0060bb3e (CONDITIONAL_JUMP)  ; LAB_0060bb3e
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0060bafc
    PUSH EAX                            ; 0060baff
    PUSH EAX                            ; 0060bb00
    MOV EAX,dword ptr [EBX + 0x20]      ; 0060bb01
    PUSH EAX                            ; 0060bb04
    MOV EAX,dword ptr [EBX + 0x18]      ; 0060bb05
    PUSH EAX                            ; 0060bb08
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0060bb09
    PUSH ESI                            ; 0060bb0c
    MOV EDI,dword ptr [EBP + 0x18]      ; 0060bb0d
    PUSH EDI                            ; 0060bb10
    CALL crt_iostream.cpp_validateBufferSeek_FUN_0060d725 ; 0060bb11
        ;   XREF to: 0060d725 (UNCONDITIONAL_CALL)  ; int crt_iostream.cpp_validateBufferSeek_FUN_0060d725(int seek_distance, int whence, char * buffer_start, char * current_ptr, ...)
    ADD ESP,0x18                        ; 0060bb16
    MOV ECX,EAX                         ; 0060bb19
    CMP EAX,-0x1                        ; 0060bb1b
    JZ 0x0060bb3e                       ; 0060bb1e
        ;   XREF to: 0060bb3e (CONDITIONAL_JUMP)  ; LAB_0060bb3e
    MOV EDX,dword ptr [EBX + 0x18]      ; 0060bb20
    MOV dword ptr [EBX + 0x20],EDX      ; 0060bb23
    MOV ESI,dword ptr [EBX + 0x1c]      ; 0060bb26
    MOV EDX,dword ptr [EBX + 0x20]      ; 0060bb29
    MOV dword ptr [EBX + 0x1c],ESI      ; 0060bb2c
    ADD EDX,EAX                         ; 0060bb2f
    MOV ESI,dword ptr [EBX + 0x38]      ; 0060bb31
    MOV dword ptr [EBX + 0x20],EDX      ; 0060bb34
    CMP EAX,ESI                         ; 0060bb37
    JLE 0x0060bb3e                      ; 0060bb39
        ;   XREF to: 0060bb3e (CONDITIONAL_JUMP)  ; LAB_0060bb3e
    MOV dword ptr [EBX + 0x38],EAX      ; 0060bb3b
    MOV EAX,ECX                         ; 0060bb3e
        ;   Label: LAB_0060bb3e
    POP EBP                             ; 0060bb40
    POP EDI                             ; 0060bb41
    POP ESI                             ; 0060bb42
    POP EBX                             ; 0060bb43
    RET                                 ; 0060bb44
    MOV EAX,0xffffffff                  ; 0060bb45
        ;   Label: LAB_0060bb45
    POP EBP                             ; 0060bb4a
    POP EDI                             ; 0060bb4b
    POP ESI                             ; 0060bb4c
    POP EBX                             ; 0060bb4d
    RET                                 ; 0060bb4e
    MOV ECX,dword ptr [EBX + 0x10]      ; 0060bb4f
        ;   Label: LAB_0060bb4f
    CMP EAX,ECX                         ; 0060bb52
    JC 0x0060baba                       ; 0060bb54
        ;   XREF to: 0060baba (CONDITIONAL_JUMP)  ; LAB_0060baba
    JMP 0x0060babd                      ; 0060bb5a
        ;   XREF to: 0060babd (UNCONDITIONAL_JUMP)  ; LAB_0060babd

