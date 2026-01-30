; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_lever_cpp_FUN_00505160(void)
;
;
; XREF[1]:
;   core_lever.cpp_FUN_00505240 at 0050526b
;
; Referenced Globals:
;   undefined4 g_CLeverClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505160
        ;   Label: core_lever.cpp_FUN_00505160
    MOV EDX,dword ptr [0x02dd3090]      ; 00505161 | g_CLeverClassInfo.name_hash
    PUSH EDX                            ; 00505167
    MOV ECX,dword ptr [ESP + 0xc]       ; 00505168
    PUSH ECX                            ; 0050516c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0050516d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,dword ptr [EAX + 0x2d8]     ; 00505172
    ADD ESP,0x8                         ; 00505178
    TEST EBX,EBX                        ; 0050517b
    SETZ DL                             ; 0050517d
    AND EDX,0xff                        ; 00505180
    MOV dword ptr [EAX + 0x2d8],EDX     ; 00505186
    MOV EAX,0x1                         ; 0050518c
    POP EBX                             ; 00505191
    RET                                 ; 00505192

