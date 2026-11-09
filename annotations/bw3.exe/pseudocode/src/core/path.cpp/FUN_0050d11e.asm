; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_path_cpp_FUN_0050d11e(CPathMap *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01ec1514
;   undefined4 DAT_01ec183c
;   undefined4 DAT_01ec1840
;   undefined4 DAT_01ec1844
;   undefined4 DAT_01ec1848
;
; Called Functions:
;   core_path.cpp_CPathMap_searchGrid_FUN_0050d170
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0050d11e
        ;   Label: core_path.cpp_FUN_0050d11e
    PUSH EBX                            ; 0050d120
    PUSH EDI                            ; 0050d121
    PUSH EBP                            ; 0050d122
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050d123
    MOV EDX,0x64                        ; 0050d127
    MOV ECX,0x63                        ; 0050d12c
    MOV EBX,0x32                        ; 0050d131
    MOV EDI,0x2                         ; 0050d136
    MOV EBP,dword ptr [EAX + 0x10]      ; 0050d13b
    MOV dword ptr [0x01ec1848],EDX      ; 0050d13e | DAT_01ec1848
    PUSH EBP                            ; 0050d144
    MOV dword ptr [0x01ec1844],ECX      ; 0050d145 | DAT_01ec1844
    MOV dword ptr [0x01ec183c],EBX      ; 0050d14b | DAT_01ec183c
    PUSH EAX                            ; 0050d151
    MOV dword ptr [0x01ec1840],EBX      ; 0050d152 | DAT_01ec1840
    MOV dword ptr [0x01ec1514],EDI      ; 0050d158 | DAT_01ec1514
    CALL core_path.cpp_CPathMap_searchGrid_FUN_0050d170 ; 0050d15e
        ;   XREF to: 0050d170 (UNCONDITIONAL_CALL)  ; uint core_path.cpp_CPathMap_searchGrid_FUN_0050d170(CPathMap * this_ptr, int start_height)
    ADD ESP,0x8                         ; 0050d163
    POP EBP                             ; 0050d166
    POP EDI                             ; 0050d167
    POP EBX                             ; 0050d168
    RET                                 ; 0050d169

