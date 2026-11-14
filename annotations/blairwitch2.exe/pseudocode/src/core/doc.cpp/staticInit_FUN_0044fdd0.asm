; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_doc_cpp_staticInit_FUN_0044fdd0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01b4d23c
;   undefined4 DAT_01b4d240
;   undefined4 DAT_01b4d244
;   undefined4 DAT_01b4d248
;   undefined4 DAT_01b4d24c
;   undefined4 DAT_01b4d250
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044fdd0
        ;   Label: core_doc.cpp_staticInit_FUN_0044fdd0
    PUSH ESI                            ; 0044fdd1
    PUSH EDI                            ; 0044fdd2
    PUSH EBP                            ; 0044fdd3
    PUSH 0x1cedf18                      ; 0044fdd4
    MOV EDX,0x3f083127                  ; 0044fdd9
    MOV ECX,0xbdf9db23                  ; 0044fdde
    PUSH 0xb                            ; 0044fde3
    MOV EBX,0x3ded9168                  ; 0044fde5
    MOV ESI,0xbf0ccccd                  ; 0044fdea
    PUSH 0x60b1ec                       ; 0044fdef
    MOV EDI,0xbdcccccd                  ; 0044fdf4
    MOV EBP,0x3dcccccd                  ; 0044fdf9
    PUSH 0x4500a0                       ; 0044fdfe
    MOV dword ptr [0x01b4d23c],EDX      ; 0044fe03 | DAT_01b4d23c
    MOV dword ptr [0x01b4d240],ECX      ; 0044fe09 | DAT_01b4d240
    PUSH 0x5cfb5f                       ; 0044fe0f
    MOV dword ptr [0x01b4d244],EBX      ; 0044fe14 | DAT_01b4d244
    MOV dword ptr [0x01b4d248],ESI      ; 0044fe1a | DAT_01b4d248
    PUSH 0x1b4d2b4                      ; 0044fe20
    MOV dword ptr [0x01b4d24c],EDI      ; 0044fe25 | DAT_01b4d24c
    MOV dword ptr [0x01b4d250],EBP      ; 0044fe2b | DAT_01b4d250
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0044fe31
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0044fe36
    POP EBP                             ; 0044fe39
    POP EDI                             ; 0044fe3a
    POP ESI                             ; 0044fe3b
    POP EBX                             ; 0044fe3c
    RET                                 ; 0044fe3d

