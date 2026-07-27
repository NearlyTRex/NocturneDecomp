; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbitmap_cpp_FUN_004f45e0(void)
;
;
; Called Functions:
;   cockpit_pkbitmap.cpp_FUN_004f44d0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x8]       ; 004f45e0
        ;   Label: cockpit_pkbitmap.cpp_FUN_004f45e0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f45e4
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f45e8
    TEST ECX,ECX                        ; 004f45ec
    JNZ 0x004f45f1                      ; 004f45ee
        ;   XREF to: 004f45f1 (CONDITIONAL_JUMP)  ; LAB_004f45f1
    RET                                 ; 004f45f0
    PUSH EDI                            ; 004f45f1
        ;   Label: LAB_004f45f1
    PUSH ESI                            ; 004f45f2
    PUSH EBX                            ; 004f45f3
    MOV ESI,dword ptr [ESP + 0x20]      ; 004f45f4
    PUSH EDX                            ; 004f45f8
    IMUL EDX,ESI                        ; 004f45f9
    MOV EBX,dword ptr [ESP + 0x28]      ; 004f45fc
    PUSH EAX                            ; 004f4600
    IMUL EAX,EBX                        ; 004f4601
    ADD ECX,EAX                         ; 004f4604
    MOV EAX,EDX                         ; 004f4606
    SAR EDX,0x1f                        ; 004f4608
    SHL EDX,0x3                         ; 004f460b
    SBB EAX,EDX                         ; 004f460e
    SAR EAX,0x3                         ; 004f4610
    ADD EAX,ECX                         ; 004f4613
    PUSH EAX                            ; 004f4615
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f4616
    PUSH EDI                            ; 004f461a
    CALL cockpit_pkbitmap.cpp_FUN_004f44d0 ; 004f461b
        ;   XREF to: 004f44d0 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_004f44d0()
    ADD ESP,0x10                        ; 004f4620
    POP EBX                             ; 004f4623
    POP ESI                             ; 004f4624
    POP EDI                             ; 004f4625
    RET                                 ; 004f4626

