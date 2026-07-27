; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045dd00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0x1010]:1  local_1010
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_0045e370 at 0045e858
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_0045dca0
;   crt_stdio.c_vsprintf_FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dd00
        ;   Label: cockpit_drawsurf.cpp_FUN_0045dd00
    PUSH ESI                            ; 0045dd01
    PUSH EDI                            ; 0045dd02
    SUB ESP,0x1004                      ; 0045dd03
    LEA EAX,[ESP + 0x1024]              ; 0045dd09
    MOV dword ptr [ESP + 0x1000],EAX    ; 0045dd10
    LEA EAX,[ESP + 0x1000]              ; 0045dd17
    PUSH EAX                            ; 0045dd1e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 0045dd1f
    PUSH EDX                            ; 0045dd26
    LEA EAX,[ESP + 0x8]                 ; 0045dd27
    PUSH EAX                            ; 0045dd2b
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0045dd2c
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_00563a08()
    ADD ESP,0xc                         ; 0045dd31
    MOV EBX,dword ptr [ESP + 0x101c]    ; 0045dd34
    PUSH EBX                            ; 0045dd3b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 0045dd3c
    PUSH ESI                            ; 0045dd43
    LEA EAX,[ESP + 0x8]                 ; 0045dd44
    PUSH EAX                            ; 0045dd48
    MOV EDI,dword ptr [ESP + 0x1020]    ; 0045dd49
    XOR ECX,ECX                         ; 0045dd50
    PUSH EDI                            ; 0045dd52
    MOV dword ptr [ESP + 0x1010],ECX    ; 0045dd53
    CALL cockpit_drawsurf.cpp_FUN_0045dca0 ; 0045dd5a
        ;   XREF to: 0045dca0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045dca0()
    ADD ESP,0x10                        ; 0045dd5f
    ADD ESP,0x1004                      ; 0045dd62
    POP EDI                             ; 0045dd68
    POP ESI                             ; 0045dd69
    POP EBX                             ; 0045dd6a
    RET                                 ; 0045dd6b

