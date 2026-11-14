; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_CPathMap_reset_FUN_00535200(CPathMap *this_ptr)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_path.cpp_CPathMap_ctor_FUN_00532fe0 at 00533003
;   core_path.cpp_CPathMap_updateIfNeeded_FUN_005334f0 at 0053362a
;   core_path.cpp_resetAllPathMaps_FUN_00535280 at 005352c7
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   crt_stdlib.c_rand_FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535200
        ;   Label: core_path.cpp_CPathMap_reset_FUN_00535200
    MOV EBX,dword ptr [ESP + 0x8]       ; 00535201
    PUSH 0x9c40                         ; 00535205
    PUSH 0x7f                           ; 0053520a
    LEA EAX,[EBX + 0x9c70]              ; 0053520c
    PUSH EAX                            ; 00535212
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00535213
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    LEA EAX,[EBX + 0x138c0]             ; 00535218
    MOV dword ptr [EBX + 0x138bc],0x0   ; 0053521e
    MOV dword ptr [EAX + 0x8],0x0       ; 00535228
    MOV EDX,dword ptr [EAX + 0x8]       ; 0053522f
    MOV dword ptr [EAX + 0x4],EDX       ; 00535232
    MOV EDX,dword ptr [EAX + 0x4]       ; 00535235
    MOV dword ptr [EAX],EDX             ; 00535238
    LEA EAX,[EBX + 0x138cc]             ; 0053523a
    MOV dword ptr [EBX + 0x138c0],0x7149f2ca ; 00535240
    MOV dword ptr [EAX + 0x8],0x0       ; 0053524a
    ADD ESP,0xc                         ; 00535251
    MOV EDX,dword ptr [EAX + 0x8]       ; 00535254
    MOV dword ptr [EAX + 0x4],EDX       ; 00535257
    MOV EDX,dword ptr [EAX + 0x4]       ; 0053525a
    MOV dword ptr [EAX],EDX             ; 0053525d
    CALL crt_stdlib.c_rand_FUN_005c084c ; 0053525f
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    AND EAX,0x3fff                      ; 00535264
    MOV dword ptr [EBX + 0x138d8],EAX   ; 00535269
    POP EBX                             ; 0053526f
    RET                                 ; 00535270

