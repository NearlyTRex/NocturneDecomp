; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_ensureFileExtension_FUN_005896b0(char *filename,char *extension)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; char *           Stack[0x8]:4   extension
; Local Variables:
; char[256]        Stack[-0x304]:256  local_304
; char[256]        Stack[-0x204]:256  local_204
; char[252]        Stack[-0x104]:252  local_104
; char[4]          Stack[-0x4]:4  local_4
;
; Called Functions:
;   crt_file.c_makepath_FUN_005febfc
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_string.c_splitpath_FUN_005ff178
;
; *****************************************************************************

section .text

    PUSH 0x31c                          ; 005896b0
        ;   Label: core_skeledit.cpp_ensureFileExtension_FUN_005896b0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 005896b5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    SUB ESP,0x304                       ; 005896ba
    LEA EAX,[ESP + 0x100]               ; 005896c0
    PUSH EAX                            ; 005896c7
    LEA EAX,[ESP + 0x4]                 ; 005896c8
    PUSH EAX                            ; 005896cc
    LEA EAX,[ESP + 0x208]               ; 005896cd
    PUSH EAX                            ; 005896d4
    LEA EAX,[ESP + 0x30c]               ; 005896d5
    PUSH EAX                            ; 005896dc
    MOV EDX,dword ptr [ESP + 0x318]     ; 005896dd
    PUSH EDX                            ; 005896e4
    CALL crt_string.c_splitpath_FUN_005ff178 ; 005896e5
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 005896ea
    CMP byte ptr [ESP + 0x100],0x0      ; 005896ed
    JZ 0x005896fe                       ; 005896f5
        ;   XREF to: 005896fe (CONDITIONAL_JUMP)  ; LAB_005896fe
    ADD ESP,0x304                       ; 005896f7
    RET                                 ; 005896fd
    PUSH EBX                            ; 005896fe
        ;   Label: LAB_005896fe
    MOV ECX,dword ptr [ESP + 0x310]     ; 005896ff
    PUSH ECX                            ; 00589706
    LEA EAX,[ESP + 0x8]                 ; 00589707
    PUSH EAX                            ; 0058970b
    LEA EAX,[ESP + 0x20c]               ; 0058970c
    PUSH EAX                            ; 00589713
    LEA EAX,[ESP + 0x310]               ; 00589714
    PUSH EAX                            ; 0058971b
    MOV EBX,dword ptr [ESP + 0x31c]     ; 0058971c
    PUSH EBX                            ; 00589723
    CALL crt_file.c_makepath_FUN_005febfc ; 00589724
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00589729
    POP EBX                             ; 0058972c
    ADD ESP,0x304                       ; 0058972d
    RET                                 ; 00589733

