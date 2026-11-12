; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_doc_cpp_FUN_0045e1b0(int param_1)
;
;
; XREF[1]:
;   core_script.cpp_FUN_00522350 at 00526f74
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0045e1b0
        ;   Label: core_doc.cpp_FUN_0045e1b0
    MOV EAX,dword ptr [EDX + 0x468]     ; 0045e1b4
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0x610] ; 0045e1ba
    RET                                 ; 0045e1c1

