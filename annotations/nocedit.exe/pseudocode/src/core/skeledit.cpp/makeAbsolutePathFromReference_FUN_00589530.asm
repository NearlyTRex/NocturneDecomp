; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_makeAbsolutePathFromReference_FUN_00589530(char *reference_path,char *target_path)
;
; Parameters:
; char *           Stack[0x4]:4   reference_path
; char *           Stack[0x8]:4   target_path
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

    PUSH 0x31c                          ; 00589530
        ;   Label: core_skeledit.cpp_makeAbsolutePathFromReference_FUN_00589530
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00589535
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    SUB ESP,0x304                       ; 0058953a
    LEA EAX,[ESP + 0x100]               ; 00589540
    PUSH EAX                            ; 00589547
    LEA EAX,[ESP + 0x4]                 ; 00589548
    PUSH EAX                            ; 0058954c
    LEA EAX,[ESP + 0x208]               ; 0058954d
    PUSH EAX                            ; 00589554
    LEA EAX,[ESP + 0x30c]               ; 00589555
    PUSH EAX                            ; 0058955c
    MOV EDX,dword ptr [ESP + 0x31c]     ; 0058955d
    PUSH EDX                            ; 00589564
    CALL crt_string.c_splitpath_FUN_005ff178 ; 00589565
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0058956a
    CMP byte ptr [ESP + 0x200],0x0      ; 0058956d
    JNZ 0x00589581                      ; 00589575
        ;   XREF to: 00589581 (CONDITIONAL_JUMP)  ; LAB_00589581
    CMP byte ptr [ESP + 0x300],0x0      ; 00589577
    JZ 0x00589588                       ; 0058957f
        ;   XREF to: 00589588 (CONDITIONAL_JUMP)  ; LAB_00589588
    ADD ESP,0x304                       ; 00589581
        ;   Label: LAB_00589581
    RET                                 ; 00589587
    PUSH EBX                            ; 00589588
        ;   Label: LAB_00589588
    PUSH 0x0                            ; 00589589
    PUSH 0x0                            ; 0058958b
    LEA EAX,[ESP + 0x20c]               ; 0058958d
    PUSH EAX                            ; 00589594
    LEA EAX,[ESP + 0x310]               ; 00589595
    PUSH EAX                            ; 0058959c
    MOV ECX,dword ptr [ESP + 0x31c]     ; 0058959d
    PUSH ECX                            ; 005895a4
    CALL crt_string.c_splitpath_FUN_005ff178 ; 005895a5
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 005895aa
    LEA EAX,[ESP + 0x104]               ; 005895ad
    PUSH EAX                            ; 005895b4
    LEA EAX,[ESP + 0x8]                 ; 005895b5
    PUSH EAX                            ; 005895b9
    LEA EAX,[ESP + 0x20c]               ; 005895ba
    PUSH EAX                            ; 005895c1
    LEA EAX,[ESP + 0x310]               ; 005895c2
    PUSH EAX                            ; 005895c9
    MOV EBX,dword ptr [ESP + 0x320]     ; 005895ca
    PUSH EBX                            ; 005895d1
    CALL crt_file.c_makepath_FUN_005febfc ; 005895d2
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005895d7
    POP EBX                             ; 005895da
    ADD ESP,0x304                       ; 005895db
    RET                                 ; 005895e1

