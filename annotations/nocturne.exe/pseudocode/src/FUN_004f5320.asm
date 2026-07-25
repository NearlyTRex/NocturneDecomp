; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f5320(undefined4 *param_1)
;
;
; XREF[6]:
;   FUN_004f5350 at 004f5367
;   FUN_004f53f0 at 004f540a
;   FUN_004f54c0 at 004f54d9
;   FUN_004f5920 at 004f593a
;   FUN_004f59d0 at 004f59d8
;   FUN_004f5a20 at 004f5a26
;
; Referenced Globals:
;   undefined4 DAT_005a1340
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_0056445f
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5320
        ;   Label: FUN_004f5320
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f5321
    PUSH 0x5a1340                       ; 004f5325 | DAT_005a1340
    MOV EDX,dword ptr [EBX + 0x4]       ; 004f532a
    PUSH EDX                            ; 004f532d
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004f532e
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 004f5333
    PUSH EAX                            ; 004f5336
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004f5337
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    MOV dword ptr [EBX],0x0             ; 004f533c
    ADD ESP,0x4                         ; 004f5342
    MOV dword ptr [EBX + 0x4],0x0       ; 004f5345
    POP EBX                             ; 004f534c
    RET                                 ; 004f534d

