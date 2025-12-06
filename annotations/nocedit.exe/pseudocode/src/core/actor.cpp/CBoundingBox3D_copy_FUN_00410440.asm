; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoundingBox3D * core_actor.cpp_CBoundingBox3D_copy_FUN_00410440(CBoundingBox3D * this_ptr, CBoundingBox3D * other)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00410440
        ;   Label: core_actor.cpp_CBoundingBox3D_copy_FUN_00410440
    MOV ECX,dword ptr [ESP + 0x8]       ; 00410444
    ADD EAX,0x4                         ; 00410448
    MOV EDX,dword ptr [ECX]             ; 0041044b
    MOV dword ptr [EAX + -0x4],EDX      ; 0041044d
    LEA EDX,[ECX + 0x4]                 ; 00410450
    ADD EAX,0x4                         ; 00410453
    MOV EDX,dword ptr [EDX]             ; 00410456
    MOV dword ptr [EAX + -0x4],EDX      ; 00410458
    LEA EDX,[ECX + 0x8]                 ; 0041045b
    SUB EAX,0x8                         ; 0041045e
    MOV EDX,dword ptr [EDX]             ; 00410461
    MOV dword ptr [EAX + 0x8],EDX       ; 00410463
    LEA EDX,[EAX + 0xc]                 ; 00410466
    LEA EAX,[ECX + 0xc]                 ; 00410469
    MOV ECX,dword ptr [EAX]             ; 0041046c
    MOV dword ptr [EDX],ECX             ; 0041046e
    LEA ECX,[EAX + 0x4]                 ; 00410470
    ADD EDX,0x4                         ; 00410473
    MOV ECX,dword ptr [ECX]             ; 00410476
    MOV dword ptr [EDX],ECX             ; 00410478
    ADD EDX,0x4                         ; 0041047a
    MOV EAX,dword ptr [EAX + 0x8]       ; 0041047d
    MOV dword ptr [EDX],EAX             ; 00410480
    LEA EAX,[EDX + -0x14]               ; 00410482
    RET                                 ; 00410485

