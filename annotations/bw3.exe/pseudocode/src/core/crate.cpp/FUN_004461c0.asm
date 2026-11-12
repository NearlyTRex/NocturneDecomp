; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_FUN_004461c0(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x28]:1  local_28
;
; XREF[6]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f60 at 0040ac63
;   core_elephant.cpp_CElephantGun_fire_FUN_00486d40 at 004874fe
;   core_exorcism.cpp_CExorcism_fire_FUN_0048b020 at 0048b579
;   core_gun.cpp_CGun_fire_FUN_004d0fc0 at 004d1818
;   core_rifle.cpp_CRifle_fire_FUN_00527d70 at 00528482
;   core_tommygun.cpp_CTommyGun_fire_FUN_0056b410 at 0056bcad
;
; Referenced Globals:
;   undefined4 s_s_exploding_005b9a19+1
;   CConsole* g_CConsolePtr = 007f7ea4
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_00600530
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d81080
;
; Called Functions:
;   core_fire.cpp_FUN_004a36e0
;   core_mission.cpp_FUN_004f6f10
;   engine_console.cpp_CConsole_printf_FUN_00441ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004461c0
        ;   Label: core_crate.cpp_FUN_004461c0
    SUB ESP,0x3c                        ; 004461c1
    MOV EBX,dword ptr [ESP + 0x44]      ; 004461c4
    CMP dword ptr [EBX + 0x70],0x1      ; 004461c8
    JZ 0x004461d3                       ; 004461cc
        ;   XREF to: 004461d3 (CONDITIONAL_JUMP)  ; LAB_004461d3
    ADD ESP,0x3c                        ; 004461ce
    POP EBX                             ; 004461d1
    RET                                 ; 004461d2
    PUSH EDI                            ; 004461d3
        ;   Label: LAB_004461d3
    PUSH ESI                            ; 004461d4
    PUSH EBX                            ; 004461d5
    PUSH 0x5b9a1a                       ; 004461d6 | s_s_exploding_005b9a19+1
    MOV ECX,dword ptr [0x005f1690]      ; 004461db | g_CConsolePtr
    PUSH ECX                            ; 004461e1 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004461e2
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004461e7
    MOV EAX,dword ptr [EBX + 0x154]     ; 004461ea
    PUSH EBX                            ; 004461f0
    LEA ESI,[ESP + 0xc]                 ; 004461f1
    LEA EDI,[ESP + 0x24]                ; 004461f5
    CALL dword ptr [EAX + 0x1c]         ; 004461f9
    MOV ECX,0x6                         ; 004461fc
    LEA ESI,[ESP + 0xc]                 ; 00446201
    LEA EAX,[ESP + 0x3c]                ; 00446205
    ADD ESP,0x4                         ; 00446209
    LEA EDX,[EBX + 0x20]                ; 0044620c
    MOVSD.REP ES:EDI,ESI                ; 0044620f
    CMP EAX,EDX                         ; 00446211
    JZ 0x00446229                       ; 00446213
        ;   XREF to: 00446229 (CONDITIONAL_JUMP)  ; LAB_00446229
    MOV EAX,dword ptr [EDX]             ; 00446215
    MOV dword ptr [ESP + 0x38],EAX      ; 00446217
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044621b
    MOV dword ptr [ESP + 0x3c],EAX      ; 0044621e
    MOV EAX,dword ptr [EDX + 0x8]       ; 00446222
    MOV dword ptr [ESP + 0x40],EAX      ; 00446225
    PUSH 0x0                            ; 00446229
        ;   Label: LAB_00446229
    FLD float ptr [ESP + 0x34]          ; 0044622b
    PUSH 0x40800000                     ; 0044622f
    LEA EAX,[ESP + 0x40]                ; 00446234
    PUSH 0x44bb8000                     ; 00446238
    MOV ESI,dword ptr [0x005fc5a0]      ; 0044623d | DAT_005fc5a0
    PUSH 0x42000000                     ; 00446243
    FSUB float ptr [ESP + 0x34]         ; 00446248
    PUSH EAX                            ; 0044624c
    FADD float ptr [ESP + 0x50]         ; 0044624d
    PUSH ESI                            ; 00446251
    FSTP float ptr [ESP + 0x54]         ; 00446252
    CALL core_fire.cpp_FUN_004a36e0     ; 00446256
        ;   XREF to: 004a36e0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a36e0()
    ADD ESP,0x18                        ; 0044625b
    PUSH 0x1                            ; 0044625e
    PUSH EBX                            ; 00446260
    MOV EDI,dword ptr [0x00600530]      ; 00446261 | DAT_00600530
    PUSH EDI                            ; 00446267 | DAT_01d81080
    CALL core_mission.cpp_FUN_004f6f10  ; 00446268
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f6f10()
    ADD ESP,0xc                         ; 0044626d
    MOV dword ptr [EBX + 0x70],0x2      ; 00446270
    POP ESI                             ; 00446277
    POP EDI                             ; 00446278
    ADD ESP,0x3c                        ; 00446279
    POP EBX                             ; 0044627c
    RET                                 ; 0044627d

