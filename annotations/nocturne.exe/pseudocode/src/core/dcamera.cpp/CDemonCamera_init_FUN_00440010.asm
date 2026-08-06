; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_init_FUN_00440010(CDemonCamera *this_ptr,int screen_height)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   screen_height
;
; XREF[3]:
;   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0043ff50 at 0043ff82
;   core_game.cpp_CGame_setGameRes_FUN_0049d870 at 0049d90d
;   core_set.cpp_CDemonSet_FUN_005090f0 at 005090fc
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_0057b61b
;   TerminatedCString s_CDemonCamera_init_Unable_0057b62f
;   TerminatedCString s_core_dcamera_cpp_0057b661
;   TerminatedCString s_CDemonCamera_init_Unable_0057b675
;   undefined4 DAT_012b0660
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_free_FUN_004401d0
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_memory.c_malloc_FUN_005635b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440010
        ;   Label: core_dcamera.cpp_CDemonCamera_init_FUN_00440010
    PUSH ESI                            ; 00440011
    PUSH EDI                            ; 00440012
    PUSH EBP                            ; 00440013
    MOV EBX,dword ptr [ESP + 0x14]      ; 00440014
    MOV ESI,dword ptr [ESP + 0x18]      ; 00440018
    PUSH EBX                            ; 0044001c
    CALL core_dcamera.cpp_CDemonCamera_free_FUN_004401d0 ; 0044001d
        ;   XREF to: 004401d0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_free_FUN_004401d0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 00440022
    CMP ESI,0x1e0                       ; 00440025
    JLE 0x00440032                      ; 0044002b
        ;   XREF to: 00440032 (CONDITIONAL_JUMP)  ; LAB_00440032
    MOV ESI,0x1e0                       ; 0044002d
    MOV dword ptr [EBX + 0x140],ESI     ; 00440032
        ;   Label: LAB_00440032
    LEA EDX,[ESI*0x4 + 0x0]             ; 00440038
    MOV ESI,0x3                         ; 0044003f
    MOV EAX,EDX                         ; 00440044
    SAR EDX,0x1f                        ; 00440046
    IDIV ESI                            ; 00440049
    MOV dword ptr [EBX + 0x14c],0x1     ; 0044004b
    MOV dword ptr [EBX + 0x13c],EAX     ; 00440055
    MOV EAX,dword ptr [EBX + 0x13c]     ; 0044005b
    XOR EDX,EDX                         ; 00440061
    MOV dword ptr [EBX + 0x150],EAX     ; 00440063
    MOV dword ptr [0x012b0660],EDX      ; 00440069 | DAT_012b0660
    MOV EAX,dword ptr [EBX + 0x140]     ; 0044006f
    MOV ECX,dword ptr [EBX + 0x150]     ; 00440075
    MOV dword ptr [EBX + 0x154],EAX     ; 0044007b
    CMP ECX,0x140                       ; 00440081
    JLE 0x004400e0                      ; 00440087
        ;   XREF to: 004400e0 (CONDITIONAL_JUMP)  ; LAB_004400e0
    MOV ESI,0x2                         ; 00440089
    MOV EAX,dword ptr [EBX + 0x150]     ; 0044008e
        ;   Label: LAB_0044008e
    MOV EDX,EAX                         ; 00440094
    SAR EDX,0x1f                        ; 00440096
    IDIV ESI                            ; 00440099
    MOV dword ptr [EBX + 0x150],EAX     ; 0044009b
    MOV EAX,dword ptr [EBX + 0x154]     ; 004400a1
    MOV EDX,EAX                         ; 004400a7
    SAR EDX,0x1f                        ; 004400a9
    IDIV ESI                            ; 004400ac
    MOV EBP,dword ptr [0x012b0660]      ; 004400ae | DAT_012b0660
    MOV EDI,dword ptr [EBX + 0x14c]     ; 004400b4
    INC EBP                             ; 004400ba
    ADD EDI,EDI                         ; 004400bb
    MOV dword ptr [EBX + 0x154],EAX     ; 004400bd
    MOV dword ptr [0x012b0660],EBP      ; 004400c3 | DAT_012b0660
    MOV EAX,dword ptr [EBX + 0x150]     ; 004400c9
    MOV dword ptr [EBX + 0x14c],EDI     ; 004400cf
    CMP EAX,0x140                       ; 004400d5
    JG 0x0044008e                       ; 004400da
        ;   XREF to: 0044008e (CONDITIONAL_JUMP)  ; LAB_0044008e
    LEA EAX,[EAX]                       ; 004400dc
    MOV EDX,dword ptr [EBX + 0x13c]     ; 004400e0
        ;   Label: LAB_004400e0
    IMUL EDX,dword ptr [EBX + 0x140]    ; 004400e6
    LEA EAX,[EDX*0x4 + 0x0]             ; 004400ed
    ADD EAX,0x1010                      ; 004400f4
    PUSH EAX                            ; 004400f9
    CALL crt_memory.c_malloc_FUN_005635b0 ; 004400fa
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 004400ff
    MOV dword ptr [EBX + 0x160],EAX     ; 00440102
    TEST EAX,EAX                        ; 00440108
    JNZ 0x0044012f                      ; 0044010a
        ;   XREF to: 0044012f (CONDITIONAL_JUMP)  ; LAB_0044012f
    MOV EDI,0x57b61b                    ; 0044010c | = "..\\core\\dcamera.cpp"
    MOV EBP,0x248                       ; 00440111
    PUSH 0x57b62f                       ; 00440116 | = "CDemonCamera::init - Unable to alloc ..."
    MOV dword ptr [0x01cc4800],EDI      ; 0044011b | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBP      ; 00440121 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00440127
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0044012c
    MOV EDX,dword ptr [EBX + 0x13c]     ; 0044012f
        ;   Label: LAB_0044012f
    IMUL EDX,dword ptr [EBX + 0x140]    ; 00440135
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044013c
    ADD EAX,0x1010                      ; 00440143
    PUSH EAX                            ; 00440148
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00440149
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 0044014e
    MOV dword ptr [EBX + 0x164],EAX     ; 00440151
    TEST EAX,EAX                        ; 00440157
    JZ 0x00440182                       ; 00440159
        ;   XREF to: 00440182 (CONDITIONAL_JUMP)  ; LAB_00440182
    MOV EAX,dword ptr [EBX + 0x160]     ; 0044015b
        ;   Label: LAB_0044015b
    ADD EAX,0x10                        ; 00440161
    AND AL,0xf0                         ; 00440164
    MOV dword ptr [EBX + 0x158],EAX     ; 00440166
    MOV EAX,dword ptr [EBX + 0x164]     ; 0044016c
    ADD EAX,0x10                        ; 00440172
    AND AL,0xf0                         ; 00440175
    MOV dword ptr [EBX + 0x15c],EAX     ; 00440177
    POP EBP                             ; 0044017d
    POP EDI                             ; 0044017e
    POP ESI                             ; 0044017f
    POP EBX                             ; 00440180
    RET                                 ; 00440181
    MOV ECX,0x57b661                    ; 00440182 | = "..\\core\\dcamera.cpp"
        ;   Label: LAB_00440182
    MOV ESI,0x24d                       ; 00440187
    PUSH 0x57b675                       ; 0044018c | = "CDemonCamera::init - Unable to alloc ..."
    MOV dword ptr [0x01cc4800],ECX      ; 00440191 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 00440197 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0044019d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004401a2
    JMP 0x0044015b                      ; 004401a5
        ;   XREF to: 0044015b (UNCONDITIONAL_JUMP)  ; LAB_0044015b

