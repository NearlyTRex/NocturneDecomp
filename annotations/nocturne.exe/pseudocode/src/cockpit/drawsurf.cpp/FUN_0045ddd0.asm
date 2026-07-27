; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045ddd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0x1010]:1  local_1010
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_0045e370 at 0045e88a
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_0045dd70
;   crt_stdio.c_vsprintf_FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ddd0
        ;   Label: cockpit_drawsurf.cpp_FUN_0045ddd0
    PUSH ESI                            ; 0045ddd1
    PUSH EDI                            ; 0045ddd2
    SUB ESP,0x1004                      ; 0045ddd3
    LEA EAX,[ESP + 0x1024]              ; 0045ddd9
    MOV dword ptr [ESP + 0x1000],EAX    ; 0045dde0
    LEA EAX,[ESP + 0x1000]              ; 0045dde7
    PUSH EAX                            ; 0045ddee
    MOV EDX,dword ptr [ESP + 0x1024]    ; 0045ddef
    PUSH EDX                            ; 0045ddf6
    LEA EAX,[ESP + 0x8]                 ; 0045ddf7
    PUSH EAX                            ; 0045ddfb
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0045ddfc
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_00563a08()
    ADD ESP,0xc                         ; 0045de01
    MOV EBX,dword ptr [ESP + 0x101c]    ; 0045de04
    PUSH EBX                            ; 0045de0b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 0045de0c
    PUSH ESI                            ; 0045de13
    LEA EAX,[ESP + 0x8]                 ; 0045de14
    PUSH EAX                            ; 0045de18
    MOV EDI,dword ptr [ESP + 0x1020]    ; 0045de19
    XOR ECX,ECX                         ; 0045de20
    PUSH EDI                            ; 0045de22
    MOV dword ptr [ESP + 0x1010],ECX    ; 0045de23
    CALL cockpit_drawsurf.cpp_FUN_0045dd70 ; 0045de2a
        ;   XREF to: 0045dd70 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045dd70()
    ADD ESP,0x10                        ; 0045de2f
    ADD ESP,0x1004                      ; 0045de32
    POP EDI                             ; 0045de38
    POP ESI                             ; 0045de39
    POP EBX                             ; 0045de3a
    RET                                 ; 0045de3b

