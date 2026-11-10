; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlies * __cdecl core_flies_cpp_CFlies_ctor_FUN_004bfa60(CFlies *this_ptr)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   core_flies.cpp_factoryFuncFlies_FUN_004bfa30 at 004bfa43
;   core_gore.cpp_FUN_004e63e0 at 004e64bb
;
; Referenced Globals:
;   CDemonActor_vtable g_CFliesVTable
;   WatcomTypeInfo g_SFlyTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 004bfa60
        ;   Label: core_flies.cpp_CFlies_ctor_FUN_004bfa60
    MOV EDX,dword ptr [ESP + 0x10]      ; 004bfa63
    PUSH EDX                            ; 004bfa67
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 004bfa68
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004bfa6d
    PUSH 0x600ba0                       ; 004bfa70 | g_SFlyTypeInfo
    PUSH 0xc8                           ; 004bfa75
    ADD EAX,0x168                       ; 004bfa7a
    PUSH EAX                            ; 004bfa7f
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004bfa80
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    LEA EDX,[EAX + 0xfffffe98]          ; 004bfa85
    MOV ECX,0x40a00000                  ; 004bfa8b
    MOV dword ptr [EDX + 0x154],0x600ac4 ; 004bfa90 | g_CFliesVTable
    ADD ESP,0xc                         ; 004bfa9a
    MOV dword ptr [EDX + 0x164],0x14    ; 004bfa9d
    MOV EAX,ESP                         ; 004bfaa7
    MOV dword ptr [ESP],ECX             ; 004bfaa9
    MOV dword ptr [ESP + 0x4],ECX       ; 004bfaac
    MOV dword ptr [ESP + 0x8],ECX       ; 004bfab0
    LEA ECX,[EDX + 0x158]               ; 004bfab4
    CMP ECX,EAX                         ; 004bfaba
    JNZ 0x004bfb00                      ; 004bfabc
        ;   XREF to: 004bfb00 (CONDITIONAL_JUMP)  ; LAB_004bfb00
    MOV dword ptr [EDX + 0x2a14],0x0    ; 004bfabe
        ;   Label: LAB_004bfabe
    MOV dword ptr [EDX + 0x2a10],0x0    ; 004bfac8
    MOV dword ptr [EDX + 0x2a08],0x0    ; 004bfad2
    MOV dword ptr [EDX + 0x2a18],0x0    ; 004bfadc
    MOV dword ptr [EDX + 0x2a1c],0x1    ; 004bfae6
    MOV EAX,EDX                         ; 004bfaf0
    MOV dword ptr [EDX + 0x2a0c],0x0    ; 004bfaf2
    ADD ESP,0xc                         ; 004bfafc
    RET                                 ; 004bfaff
    MOV dword ptr [ECX],0x40a00000      ; 004bfb00
        ;   Label: LAB_004bfb00
    MOV EAX,dword ptr [ESP + 0x4]       ; 004bfb06
    MOV dword ptr [ECX + 0x4],EAX       ; 004bfb0a
    MOV EAX,dword ptr [ESP + 0x8]       ; 004bfb0d
    MOV dword ptr [ECX + 0x8],EAX       ; 004bfb11
    JMP 0x004bfabe                      ; 004bfb14
        ;   XREF to: 004bfabe (UNCONDITIONAL_JUMP)  ; LAB_004bfabe

