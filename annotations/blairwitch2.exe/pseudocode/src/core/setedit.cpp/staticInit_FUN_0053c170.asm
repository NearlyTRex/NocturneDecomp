; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setedit_cpp_staticInit_FUN_0053c170(void)
;
;
; Referenced Globals:
;   undefined4 DAT_020b190c
;   undefined4 DAT_020b1910
;   undefined4 DAT_020b1914
;   undefined4 DAT_020b1918
;   undefined4 DAT_020b191c
;   undefined4 DAT_020b1920
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c170
        ;   Label: core_setedit.cpp_staticInit_FUN_0053c170
    PUSH ESI                            ; 0053c171
    PUSH 0x1c264a8                      ; 0053c172
    PUSH 0x1                            ; 0053c177
    MOV EDX,0xbe8f5c29                  ; 0053c179
    MOV ECX,0x3ed70a3d                  ; 0053c17e
    PUSH 0x61bb6c                       ; 0053c183
    MOV EBX,0x3f19999a                  ; 0053c188
    MOV ESI,0x3eb33333                  ; 0053c18d
    PUSH 0x53c1d0                       ; 0053c192
    MOV dword ptr [0x020b190c],EDX      ; 0053c197 | DAT_020b190c
    MOV dword ptr [0x020b1910],ECX      ; 0053c19d | DAT_020b1910
    PUSH 0x5e64fd                       ; 0053c1a3
    MOV dword ptr [0x020b1914],EBX      ; 0053c1a8 | DAT_020b1914
    MOV dword ptr [0x020b1918],ESI      ; 0053c1ae | DAT_020b1918
    PUSH 0x20b1964                      ; 0053c1b4
    MOV dword ptr [0x020b191c],ECX      ; 0053c1b9 | DAT_020b191c
    MOV dword ptr [0x020b1920],EBX      ; 0053c1bf | DAT_020b1920
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0053c1c5
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0053c1ca
    POP ESI                             ; 0053c1cd
    POP EBX                             ; 0053c1ce
    RET                                 ; 0053c1cf

