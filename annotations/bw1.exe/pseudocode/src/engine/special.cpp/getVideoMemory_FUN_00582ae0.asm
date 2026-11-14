; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_getVideoMemory_FUN_00582ae0(int *total_memory,int *available_memory,int *memory_type)
;
; Parameters:
; int *            Stack[0x4]:4   total_memory
; int *            Stack[0x8]:4   available_memory
; int *            Stack[0xc]:4   memory_type
;
; XREF[1]:
;   core_menu.cpp_configureGraphicsOptions_FUN_0050aa90 at 0050ab34
;
; Referenced Globals:
;   undefined4 DAT_02c83410
;   undefined4 DAT_02c834ac
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c834ac],0x0      ; 00582ae0 | DAT_02c834ac
        ;   Label: engine_special.cpp_getVideoMemory_FUN_00582ae0
    JNZ 0x00582aec                      ; 00582ae7
        ;   XREF to: 00582aec (CONDITIONAL_JUMP)  ; LAB_00582aec
    XOR EAX,EAX                         ; 00582ae9
    RET                                 ; 00582aeb
    PUSH ESI                            ; 00582aec
        ;   Label: LAB_00582aec
    PUSH EBX                            ; 00582aed
    MOV ECX,dword ptr [ESP + 0x14]      ; 00582aee
    PUSH ECX                            ; 00582af2
    MOV EBX,dword ptr [ESP + 0x14]      ; 00582af3
    PUSH EBX                            ; 00582af7
    MOV ESI,dword ptr [ESP + 0x14]      ; 00582af8
    PUSH ESI                            ; 00582afc
    CALL dword ptr [0x02c83410]         ; 00582afd | DAT_02c83410
    ADD ESP,0xc                         ; 00582b03
    POP EBX                             ; 00582b06
    POP ESI                             ; 00582b07
    RET                                 ; 00582b08

